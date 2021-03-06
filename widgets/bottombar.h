/**
This file (c) by : - Martin Hammerchmidt alias Imote

This file is licensed under a
Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

You should have received a copy of the license along with this
work. If not, see <http://creativecommons.org/licenses/by-nc-sa/4.0/>.

If you have contributed to this file, add your name to authors list.
*/

#ifndef BOTTOMBAR_H
#define BOTTOMBAR_H

#include <QWidget>
#include <QPaintEvent>
#include <QStyleOption>
#include <QPainter>
#include <QStyle>
#include <QHBoxLayout>
#include "shared.h"
#include "label.h"
#include "button.h"

class BottomBarWidget : public QFrame
{
public:
    BottomBarWidget(QWidget * parent = 0): QFrame(parent)
    {
    }

protected:
    void paintEvent(QPaintEvent *)
    {
        QStyleOption opt;
        opt.init (this);
        QPainter p (this);
        style ()->drawPrimitive (QStyle::PE_Widget, &opt, &p, this);
    }
};

class BottomBarConfigurationWindow : public BottomBarWidget
{
    Q_OBJECT
public:
    BottomBarConfigurationWindow(QWidget * parent = 0): BottomBarWidget(parent)
    {
        setContentsMargins(-10,-10,-10,-10);

        validateLayout = new QHBoxLayout;
        version = new LabelBlue(Uplimg::versionText);
        validateButton = new ButtonBlue("Ok");
        //validateLayout->addWidget(version);
        validateLayout->addStretch();
        validateLayout->addWidget(validateButton);
        setLayout(validateLayout);

        QObject::connect(validateButton, SIGNAL(clicked()), this, SIGNAL(validate()));
    }

signals:
    void validate();

protected:
    QHBoxLayout * validateLayout;
    LabelBlue * version;
    ButtonBlue * validateButton;

    void paintEvent(QPaintEvent *)
    {
        QStyleOption opt;
        opt.init (this);
        QPainter p (this);
        style ()->drawPrimitive (QStyle::PE_Widget, &opt, &p, this);
    }
};

#endif // BOTTOMBAR_H

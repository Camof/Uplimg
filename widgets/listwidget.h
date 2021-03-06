/**
This file (c) by : - Martin Hammerchmidt alias Imote

This file is licensed under a
Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

You should have received a copy of the license along with this
work. If not, see <http://creativecommons.org/licenses/by-nc-sa/4.0/>.

If you have contributed to this file, add your name to authors list.
*/

#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QListWidget>

class ListWidgetGreen : public QListWidget
{
public:
    ListWidgetGreen(QWidget * parent = 0) : QListWidget(parent)
    {
        setObjectName("green");
    }
};

class ListWidgetOrange : public QListWidget
{
public:
    ListWidgetOrange(QWidget * parent = 0) : QListWidget(parent)
    {
        setObjectName("orange");
    }
};

class ListWidgetBlue : public QListWidget
{
public:
    ListWidgetBlue(QWidget * parent = 0) : QListWidget(parent)
    {
        setObjectName("blue");
    }
};

#endif // LISTWIDGET_H

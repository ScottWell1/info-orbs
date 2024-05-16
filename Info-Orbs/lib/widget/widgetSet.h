#ifndef WIDGET_SET_H
#define WIDGET_SET_H

#include <widget.h>
#include <screenManager.h>

#define MAX_WIDGETS 5

class WidgetSet {
public:
    WidgetSet(ScreenManager *sm);
    void add(Widget *widget);
    void drawCurrent();
    void updateCurrent();
    Widget *getCurrent();
    void next();
    void prev();

private:
    ScreenManager *m_screenManager;
    Widget *m_widgets[MAX_WIDGETS];
    int8_t m_widgetCount = 0;
    int8_t m_currentWidget = 0;

    void switchWidget();
};
#endif // WIDGET_SET_H
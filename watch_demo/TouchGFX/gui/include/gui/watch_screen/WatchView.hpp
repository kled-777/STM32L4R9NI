#ifndef WATCHVIEW_HPP
#define WATCHVIEW_HPP

#include <gui_generated/watch_screen/WatchViewBase.hpp>
#include <gui/watch_screen/WatchPresenter.hpp>

class WatchView : public WatchViewBase
{
public:
    WatchView();
    virtual ~WatchView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // WATCHVIEW_HPP

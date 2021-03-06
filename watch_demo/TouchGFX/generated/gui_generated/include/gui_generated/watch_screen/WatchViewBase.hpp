/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef WATCHVIEWBASE_HPP
#define WATCHVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/watch_screen/WatchPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/AnimationTextureMapper.hpp>
#include <touchgfx/containers/clock/AnalogClock.hpp>

class WatchViewBase : public touchgfx::View<WatchPresenter>
{
public:
    WatchViewBase();
    virtual ~WatchViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box BackgroundFill;
    touchgfx::Image Background;
    touchgfx::AnimationTextureMapper humidity;
    touchgfx::AnimationTextureMapper pressure;
    touchgfx::Image PressureGaugeDot;
    touchgfx::Image HumidityGaugeDot;
    touchgfx::Image tgfx_logo_white;
    touchgfx::AnalogClock analogClock;
    touchgfx::Image watch_needle_center;

private:

};

#endif // WATCHVIEWBASE_HPP

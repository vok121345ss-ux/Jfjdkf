#include <Geode/Geode.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto button = CCMenuItemLabel::create(
            CCLabelBMFont::create("EEEE CHEAT", "bigFont.fnt"),
            [](CCObject*) {
                FLAlertLayer::create(
                    "EEEE Cheat",
                    "EEEE Cheat loaded!",
                    "OK"
                )->show();
            }
        );

        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition({ CCDirector::sharedDirector()->getWinSize().width / 2,
                            100 });

        this->addChild(menu);
        return true;
    }
};

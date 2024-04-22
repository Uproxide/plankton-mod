#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>
class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}

		auto planktinButton = CCMenuItemSpriteExtra::create(
			CCSprite::create("GJ_likeBtn_001.png"),
			this,
			menu_selector(MyMenuLayer::onPlanktinButton)
		);

		auto menu = this->getChildByID("bottom-menu");
		menu->addChild(planktinButton);

		planktinButton->setID("planktin-button"_spr);

		menu->updateLayout();

		return true;
	}

	void onPlanktinButton(CCObject*) {
		auto plank = CCSprite::create("plankton"_spr);
		auto text = CCLabelBMFont::create("All hail plankerton :fire:", "bigFont.fnt");

		this->addChild(plank);
		this->addChild(text);

		plank->setPosition(100, 80);
		text->setPosition(100, 75);
	}
};

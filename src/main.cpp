#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>
class $modify(MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}

		auto plank = CCSprite::create("plankton"_spr);
		auto text = CCLabelBMFont::create("All hail plankerton :fire:", "bigFont.fnt");

		this->addChild(plank);
		this->addChild(text);

		plank->setPosition(100, 80);
		text->setPosition(100, 75);

		return true;
	}
};

#include <Geode/Geode.hpp>
#include <Geode/modify/LevelCell.hpp>

using namespace geode::prelude;

class $modify(LevelCell) {
	void loadCustomLevelCell() {
		LevelCell::loadCustomLevelCell();
		auto mainLayer = this->getChildByID("main-layer");
		auto songName = getChildOfType<CCLabelBMFont>(mainLayer, 1);
		if (this->m_level->m_songID >= 10000000) songName->setColor({100, 255, 200});
	}
};
#include <Geode/modify/LevelCell.hpp>

using namespace geode::prelude;

class $modify(LevelCell) {
	void loadCustomLevelCell() {
		LevelCell::loadCustomLevelCell();
		if (m_level->m_songID >= 10000000) typeinfo_cast<CCLabelBMFont*>(this->getChildByIDRecursive("song-name"))->setColor(Mod::get()->getSettingValue<ccColor3B>("color"));
	}
};
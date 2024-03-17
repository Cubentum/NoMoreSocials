// hiiiii!!!!!! :)
// i (somewhat) learned c++ for this
// anyways bye (17/3/2024)


#include <Geode/Geode.hpp>


#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;


class $modify(MenuLayer) {
    bool init() {
        if(!MenuLayer::init()) return false;
        
        auto socialmediamenu = this->getChildByID("social-media-menu");
		auto robtopbutton = socialmediamenu->getChildByID("robtop-logo-button");
        auto twitchbutton = socialmediamenu->getChildByID("twitch-button");
        auto discordbutton = socialmediamenu->getChildByID("discord-button");
        auto youtubebutton = socialmediamenu->getChildByID("youtube-button");
        auto facebookbutton = socialmediamenu->getChildByID("facebook-button");
        auto twitterbutton = socialmediamenu->getChildByID("twitter-button");

		robtopbutton->setVisible(false);
		twitchbutton->setVisible(false);
		discordbutton->setVisible(false);
		youtubebutton->setVisible(false);
		facebookbutton->setVisible(false);
		twitterbutton->setVisible(false);


        auto profileMenu = this->getChildByID("profile-menu");
        auto playerusername = this->getChildByID("player-username");

        profileMenu->setPositionY(45);
        playerusername->setPositionY(85);
        

        return true;
        }
    }     
;
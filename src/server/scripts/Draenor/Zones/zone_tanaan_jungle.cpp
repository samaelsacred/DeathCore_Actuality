/*
 * Copyright (C) 2016-2017 DeathCore <http://www.noffearrdeathproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "ScriptedGossip.h"
#include "Player.h"
#include "MapManager.h"
#include "zone_tanaan_jungle.h"


class playerScript_add_tanaan_for_max_level : public PlayerScript
{
    public:
        playerScript_add_tanaan_for_max_level() : PlayerScript("playerScript_add_tanaan_for_max_level") { }

        void OnLogin(Player* player, bool /*firstLogin*/)  override
        {
			if (player->getLevel() == 90 && player->GetQuestStatus(TanaanQuests::QUEST_THE_DARK_PORTAL) == QUEST_STATUS_NONE)
            {
                if (Quest const* QuestTheDarkPortal = sObjectMgr->GetQuestTemplate(TanaanQuests::QUEST_THE_DARK_PORTAL))
                    player->AddQuest(QuestTheDarkPortal, nullptr);
            }
        }
};

class map_dark_portal_entrance : public WorldMapScript
{
    public:
        map_dark_portal_entrance() : WorldMapScript("map_dark_portal_entrance", TanaanZones::MapTanaan) { }

        void OnPlayerEnter(Map* map, Player* /*player*/) override { map->SetObjectVisibility(350.0f); }
};

class npc_archmage_khadgar_gossip : public CreatureScript
{
    public:
        npc_archmage_khadgar_gossip() : CreatureScript("npc_archmage_khadgar_gossip")
        {
        }

        bool OnGossipHello(Player* player, Creature* /*creature*/)
        {
            if (player->GetTeamId() == TEAM_ALLIANCE)
            {
                if (player->GetQuestStatus(TanaanQuests::QUEST_THE_DARK_PORTAL) == QUEST_STATUS_INCOMPLETE)
                {
                    player->TeleportTo(TanaanZones::MapTanaan, 4066.7370f, -2381.9917f, 94.858f, 2.90f);
                    player->SendMovieStart(TanaanMovies::MovieEnterPortal);
                    player->KilledMonsterCredit(TanaanKillCredits::CreditDarkPortalKill);
                }
                else if (player->GetQuestStatus(TanaanQuests::QUETS_THE_DARK_PORTAL_2) == QUEST_STATUS_INCOMPLETE)
                {
                    player->TeleportTo(TanaanZones::MapTanaan, 4066.7370f, -2381.9917f, 94.858f, 2.90f);
                    player->SendMovieStart(TanaanMovies::MovieEnterPortal);
                    player->KilledMonsterCredit(TanaanKillCredits::CreditDarkPortalKill);
                }
            }
            else if (player->GetTeamId() == TEAM_HORDE)
            {
                if (player->GetQuestStatus(TanaanQuests::QUEST_THE_DARK_PORTAL)  == QUEST_STATUS_INCOMPLETE)
                {
                    player->TeleportTo(TanaanZones::MapTanaan, 4066.7370f, -2381.9917f, 94.858f, 2.90f);
                    player->SendMovieStart(TanaanMovies::MovieEnterPortal);
                    player->KilledMonsterCredit(TanaanKillCredits::CreditDarkPortalKill);
                }
                else if (player->GetQuestStatus(TanaanQuests::QUETS_THE_DARK_PORTAL_2) == QUEST_STATUS_INCOMPLETE)
                {
                    player->TeleportTo(TanaanZones::MapTanaan, 4066.7370f, -2381.9917f, 94.858f, 2.90f);
                    player->SendMovieStart(TanaanMovies::MovieEnterPortal);
                    player->KilledMonsterCredit(TanaanKillCredits::CreditDarkPortalKill);
                }
            }
            return true;
        }
};

void AddSC_tanaan_jungle()
{
    new playerScript_add_tanaan_for_max_level();
    new map_dark_portal_entrance();
    new npc_archmage_khadgar_gossip();
}

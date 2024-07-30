/*
* This file is part of the Pandaria 5.4.8 Project. See THANKS file for Copyright information
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

#include "ScriptedGossip.h"


void ClearGossipMenuFor(Player* player)
{
    player->PlayerTalkClass->ClearMenus();
}

// Using provided text, not from DB
void AddGossipItemFor(Player* player, uint32 icon, std::string const& text, uint32 sender, uint32 action)
{
    player->PlayerTalkClass->GetGossipMenu().AddMenuItem(-1, icon, text, sender, action, "", 0);
}

// Using provided texts, not from DB
void AddGossipItemFor(Player* player, uint32 icon, std::string const& text, uint32 sender, uint32 action, std::string const& popupText, uint32 popupMoney, bool coded)
{
    player->PlayerTalkClass->GetGossipMenu().AddMenuItem(-1, icon, text, sender, action, popupText, popupMoney, coded);
}

// Uses gossip item info from DB
void AddGossipItemFor(Player* player, uint32 gossipMenuID, uint32 gossipMenuItemID, uint32 sender, uint32 action)
{
    player->PlayerTalkClass->GetGossipMenu().AddMenuItem(gossipMenuID, gossipMenuItemID, sender, action);
}

void SendGossipMenuFor(Player* player, uint32 npcTextID, uint64 const& guid)
{
    SendGossipMenuFor(player, npcTextID, guid);
}

void SendGossipMenuFor(Player* player, uint32 npcTextID, Creature const* creature)
{
    if (creature)
        SendGossipMenuFor(player, npcTextID, creature->GetGUID());
}

void CloseGossipMenuFor(Player* player)
{
    CloseGossipMenuFor(player);
}

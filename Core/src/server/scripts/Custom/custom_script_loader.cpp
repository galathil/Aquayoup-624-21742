/*
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
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

// This is where scripts' loading functions should be declared:
void AddSC_solocraft();
void AddSC_Stitch_npc_ai_level_scale();			//Stitch Pour npc . A l'agro s'adapte au level de l'agresseur - AI Caster
void AddSC_npc_levels();						//Stitch PNJ Level et Lieux de depart avec réputation & equipements
void AddSC_npc_changer();						//Stitch PNJ change race , faction , rename et custom 15000142

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddCustomScripts()
{
		AddSC_solocraft();
		AddSC_Stitch_npc_ai_level_scale();
		AddSC_npc_levels();
		AddSC_npc_changer();
}

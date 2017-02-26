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
#include "auchindoun.h"

enum eAzzakelSpells
{
    SpellClawsOfArgusBuff            = 153762,
    SpellClawsOfArgusVisual          = 153764,
    SpellClawsOfArgusDmg             = 153772,
    SpellCurtainOfFlameAura          = 153392,
    SpellCurtainOfFlameForceCast     = 153396,
    SpellCurtainOfFlameVisual        = 153400,
    SpellFelLashVisual               = 153234,
    SpellFelLashDummy                = 174872,
    SpellFelLashDebuff               = 177120,
    SpellFelLashDebuffTwo            = 177121,
    SpellMalevilentCrush             = 153499,
    SpellFelPoolAreatriger           = 153500, 
    SpellFelPoolDebuffDmg            = 153616,
    SpellVisualFelBurst              = 169682,
    SpellFelSparkAreaTrigger         = 153725,
    SpellFelSparkDamage              = 153726,
    SpellFelSparkPerioidicCreation   = 153727,
    SpellSummonImp                   = 153775,
    SpellFelGuard                    = 164080,
    SpellSummonPyromaniac            = 164127,
    SpellFly                         = 161778
};

enum eAzzakelTalks
{
    AzzakelIntro   = 37,  ///< Who Dares Meddlie In The Works Of The Legion?! (46776) 
    AzzakelAggro   = 38,  ///< This World...All World...Shell Burn!(46774)
    AzzakelSpell03 = 39,  ///< Die, Insect!(46781)
    AzzakelSpell02 = 40,  ///< Burn In The Master'S Fire!(46780)
    AzzakelSpell01 = 41,  ///< Come Forth, Servants!(46779)
    AzzakelKill01  = 42,  ///< The Masters Blase Your Soul! (46777)
    AzzakelKill02  = 43,  ///< Burn! (46778)
    AzzakelDeath   = 44   ///< (46775)
};

enum eAzzakelCreatures
{
    TriggerFelPool             = 326526,
    TriggerFelSpark            = 326527,
    TriggerDemonSummoning      = 432636,
    CreatureFelguard           = 76259,
    CreatureCacklingPyromaniac = 76260,
    CreatureBlazingTrickster   = 79511,
    CreatureBlazingTrickster02 = 76220
};

enum eAzzakelActions
{
    ActionFelSpark  = 1,
    ActionSummonDemons,
    ActionRenewEvents,
    ActionBoolActivate,
    ActionBoolDeactivate,
    ActionMalevolentCrash
};

enum eAzzakelMovements
{
    MovementAzzakelMalevolentCrash = 2
};

Position const g_PositionAzzakel_Blackgate = { 1929.65f, 2699.27f, 30.799f, 4.428220f };

Position const g_PositionSpawningFlyCoords[2] =
{
    { 1912.13f, 2720.44f, 49.818f, 1.600908f },
    { 1911.65f, 2757.73f, 30.799f, 4.748000f }
};

Position const g_PositionAzzakelBlackgateLittle[4] =
{
    { 1911.90f, 2680.62f, 31.418f, 1.450705f },
    { 1911.79f, 2764.35f, 31.418f, 4.721891f },
    { 1953.55f, 2722.47f, 31.418f, 3.139304f },
    { 1869.70f, 2722.45f, 31.418f, 0.001632f }
};
 
void AddSC_boss_azzakel()
{
    
}

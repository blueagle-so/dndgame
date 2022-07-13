#include "D20Character.hpp"
#include <iostream>
namespace D20Rules
{
    D20Character::D20Character()
    {
		//SavingThrows.Fortitude.iModifier = Abilities.Constitution.iModifier;
	SavingThrows.Reflex.iModifier=Abilities.Dexterity.getModifier();
        SavingThrows.Will.iModifier=Abilities.Wisdom.iModifier;
        
        //ArmorClass.iDexModifier = Abilities.Dexterity.iModifier;
    }
}

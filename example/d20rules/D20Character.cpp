#include "D20Character.hpp"
#include <iostream>
namespace D20Rules
{
    D20Character::D20Character()
    {
		//SavingThrows.Fortitude.iModifier = Abilities.Constitution.iModifier;
		//SavingThrows.Reflex.iModifier = Abilities.Dexterity.iModifier;
        SavingThrows.Will.setModifier(3);
	std::cout<<Abilities.Wisdom.getModifier()<<std::endl;
        
        //ArmorClass.iDexModifier = Abilities.Dexterity.iModifier;
    }
}

#include <iostream>
#include "D20Character.hpp"

using namespace std;
using namespace D20Rules;

int main()
{
	D20Character c;
	 //c.Abilities.Dexterity.setScore(18);
	//cout << c.Abilities.Dexterity.getModifier()<<endl;
    //c.Abilities.Wisdom.rollAbility();
        cout << c.Abilities.Wisdom.getModifier()<<endl;;
	cout << c.SavingThrows.Will.getModifier()<<endl;


return 0;
}

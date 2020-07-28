#include <iostream>
#include "dice.hpp"
#include "creature.hpp"

#include "armor.hpp"
#include "weapons.hpp"
#include "race.hpp"
#include "background.hpp"
#include "character.hpp"
#define dndgame main

int dndgame(int argc, char* argv[]) {
  dnd::creature monster("goblin",15,"neutral evil",7,'S',30,"humanoid",8,14,10,10,8,8);
   dnd::character player("Vladislak Marsk","FIGHTER","HIGH ELF","ACOLYTE",1,10,10,10,10,10,10,false,1);
  player.setWeapon("LONGSWORD");
  player.setArmor("LEATHER");
  int dp,cp,dg,cg,ap,ag;
  const std::string red("\033[0;31m");
  const std::string yellow("\033[0;33m");
  const std::string reset("\033[0m");
  std::vector <std::string>tr;
  tr=player.getTraits();
  //for(int i=0;i<tr.size();i++)
  //for (auto it = tr.begin(); it != tr.end(); ++it)
    //  {
    //    std::cout<<tr[i]<<std::endl;
     // }
  // std::cout<<abilities["STR"]<<std::endl;
  //std::cout<<dnd::dices[0]<<std::endl;
// for(auto& item : _textures)
// {
 //      cout << item.first << " : " << item.second << endl; //Вывод ключей и значений
 //}

  //std::cout<<player.getHP()<<std::endl;
//std::cout<<dnd::d6.nums<<std::endl;
 // std::cout<<player.defense()<<std::endl;
  while(!(monster.getHP()<=0)&&!(player.getHP()<=0)){
    cp=player.attackRoll();
    dp=player.damageRoll();
    cg=dnd::d20.roll()+4;
    dg=dnd::d6.roll()+2;
    if(cp>=monster.getAC()){monster.damage(dp);
std::cout << player.getName() <<" attack "
  << monster.getName() <<red<<" hit("
  << cp << ") "<< dp << "dm" <<reset<<std::endl;
  }else{std::cout << player.getName() <<" attack "
    <<monster.getName() <<yellow <<" miss("
      << cp <<")"<<reset << std::endl;}
      if (monster.getHP()<=0)break;

     if(cg>=player.defense()){player.damage(dg);
std::cout << monster.getName() << " attack "
  << player.getName() <<red<<" hit(" << cg
  << ") "<< dg << "dm" <<reset<<std::endl;
  } else std::cout << monster.getName() <<" attack  "
    << player.getName() << yellow<<" miss("
      << cg <<")"<<reset << std::endl;
    }

if(monster.getHP()<=0)
std::cout << player.getName() <<red<< " kill " <<reset << monster.getName() << std::endl;
else
std::cout << monster.getName() << red<<" kill " <<reset << player.getName() << std::endl;
return 0;
}

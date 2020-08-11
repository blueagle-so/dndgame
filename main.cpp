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
  dnd::creature monster("goblin",15,"neutral evil",7,'S',30,"goblinoid",8,14,10,10,8,8);
   dnd::character player("Vladislak Marsk","WIZARD","HIGH ELF","ACOLYTE",1,10,10,10,10,10,10,false,1);
   //dnd::character* move=new dnd::character("Vladislak Marsk","WIZARD","HIGH ELF","ACOLYTE",1,10,10,10,10,10,10,false,1);
   player.setWeapon("LONGSWORD");
  player.setArmor("LEATHER");
  //move = &player;
  int dp,cp,dg,cg,ap,ag;
  const std::string red("\033[0;31m");
  const std::string yellow("\033[0;33m");
  const std::string reset("\033[0m");
  std::vector <std::string>tr;
  tr=player.getTraits();
  //std::cout<< player.getLevel()<<std::endl;
  //std::cout<<move->getAC()<<std::endl;

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
  bool mod=false;
  while(1){
    mod=!mod;
    if(mod){
    cp=player.attackRoll();
    dp=player.damageRoll();
    ap=monster.getAC();
    }else{
    cp=dnd::d20.roll()+4;
    dp=dnd::d6.roll()+2;
    ap=player.getAC();
    }

    if(cp>=ap){((mod)?(dnd::character*)&monster:&player)->damage(dp);
std::cout << ((!mod)?(dnd::character*)&monster:&player)->getName() <<" attack ";
//move=(mod)?(dnd::character*)&monster:&player;
std::cout<<  ((mod)?(dnd::character*)&monster:&player)->getName() <<red<<" hit("
  << cp << ") "<< dp << "dm" <<reset<<std::endl;
  //move=(!mod)?(dnd::character*)&monster:&player;
     if (((mod)?(dnd::character*)&monster:&player)->getHP()<=0)break;
    }else{std::cout << ((!mod)?(dnd::character*)&monster:&player)->getName() <<" attack ";
       std::cout <<   ((mod)?(dnd::character*)&monster:&player)->getName()    <<yellow <<" miss("
      << cp <<")"<<reset << std::endl;}
    //move=(mod)?(dnd::character*)&monster:&player;
    //if (move->getHP()<=0)break;


    /*
     if(cg>=move->getAC()){move->damage(dg);
std::cout << m << " attack "
  << move->getName() <<red<<" hit(" << cg
  << ") "<< dg << "dm" <<reset<<std::endl;
  } else std::cout << m <<" attack  "
    << move->getName() << yellow<<" miss("
      << cg <<")"<<reset << std::endl;
    */
      }

//if(monster.getHP()<=0)
std::cout << ((!mod)?(dnd::character*)&monster:&player)->getName() <<red<< " kill " <<reset << ((mod)?(dnd::character*)&monster:&player)->getName() << std::endl;
//else
//std::cout << m << red<<" kill " <<reset << move->getName() << std::endl;
return 0;
}

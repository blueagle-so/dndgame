#pragma once

#ifndef DND_CLASSES_HPP
#define DND_CLASSES_HPP

#include <map>
#include <vector>
namespace dnd{
   struct lvlup{
     int lvl;
     int proBonus;
     std::vector<std::string> prof;
  };
  class classes{
    public:
      struct Class{
        std::string name;
        dice die;
        std::map <int,dnd::lvlup> lmap;
        std::map<std::string, std::string> traits;
        std::vector<std::string> prof;
        };
        typedef std::map<std::string, Class> cmap;
        static cmap classs;
  };

}
#endif //DND_CLASSES_HPP

#pragma once
#include <map>


class EntityTypes {
    public:
        enum class specificType {
            PACMAN, INKY, PINKY, BLINKY, CLYDE, FOOD, CAPSULE, DOOR, WALL, EMPTY
        };
        enum class generalType {
            PLAYER, GHOST, ITEM, EMPTY
        };
        struct entityInfo {
            const char* fileName;
            specificType st; // Specific Type
            generalType gt; // General Type
        };
        const static std::map<char, entityInfo> entityTypes;
};

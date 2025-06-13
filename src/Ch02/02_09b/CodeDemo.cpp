// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

// this will help encode the role of the character in the game
enum class character_role {protagonist, antagonist, sidekick, npc};

/*
structure to store character name, character, and role:
so now for every game charcter, you have a name, level, and role variable of type string, int, and character_role respectively.
*/

struct game_character{
    std::string name;
    int level;
    character_role role;
};

int main(){
    game_character buddy;

    //to access the members, use the member access operator '.'
    buddy.name = "Tony";
    buddy.level = 10;
    // this assigns a number to the role of buddy that just happens to be called sidekick, encoded according to the enum class
    buddy.role = character_role::sidekick;

    std::cout << buddy.name << " is a level " << buddy.level << " character with the role of " << (int) buddy.role << "." << std::endl << std::endl;
   
    std::cout << std::endl << std::endl;
    return 0;
}

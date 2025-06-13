// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

/*
c-style enumeration:
    - Used to categorize assests in a  video game
    - the supported types are texture, sound, animation, and script where each is assigned a sequential integer
    - i.e. texture = 0, sound = 1, animation = 2, and script = 3
    - identifiers/names in enumeration don't have a scope, they work like global variables and should be avoided
*/ 
//enum asset_type {texture, sound, animation, script};

// with this example, texture could mean 0 or 4. sound could be 1 or 2. This will throw a compiler error
//enum menu_section {background,  music, sound, controls, texture};

/* 
- these issues can be fixed by changing the enum lists to enum classes
- to refer to enum class members, use scop resolution operator '::'
- since strongly typed, compiler enforces correct use of distinct type and not assume integers
*/
enum  class asset_type {texture, sound, animation, script};
enum class menu_section {background,  music, sound, controls, texture};



int main(){
    // declaring another varible of type int and name sound
    // compiler won't complain about duplicate identifier  
    // output shows value of variable in main function, not the asset_type in encoding for sound
    int sound = 8;
    //int asset_value;

    //declares variable 'asset_value' of type 'asset_type'
    asset_type asset_value;

    // sound is now an integer and will print out the value '1'
    //asset_value = sound;

    /*
    - for classes, use '::' operator
    - however, asset_type is type int and the value of asset_type cannot be assigned to an entity of type int
    - instead, cast sound to int which prevents compiler from assuming anything
    - or declare a variable of type asset_type which is preferred since it's strong typed
    */  
    // remove the cast because enum classes are strongly typed
    asset_value = asset_type::sound;

    // insertion operator is not defined for variable type 'asset_type'
    // instead, cast asset_value to int
    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

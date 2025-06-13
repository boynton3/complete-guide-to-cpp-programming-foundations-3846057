// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45;
    // implicit type conversion or casting, when you assign a float or a doubleto an int variable, variable gets truncated (sprite_x is now 123)
    sprite_x = target_x;
    // trying to assign an negative number to an unsigned variable. Instead number is copied as-is. i.e. the 32-bit version of the 2's compliment of -123 (= 2^32 - 123). This is the same binary number, but means a different values in the variables
    player_x = sprite_x;

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    //std::cout << "Player X (uint32_t): " << player_x << std::endl;

    //change what we send to the screen by casting it to a signed 32-bit integer
    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x) << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}

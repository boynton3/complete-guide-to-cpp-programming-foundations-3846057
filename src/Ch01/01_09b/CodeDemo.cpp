// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>


int main(){
    std::string name;
    //flush allows user input to appear in same line as the prompt
    //also ensures output is completley sent to terminal before user input 
    std::cout << "Enter your name: " << std::flush;

    //captures user's input into the 'name' variable
    //cin only works for single words
    std::cin >> name;

    //response message for cout:
    std::cout << "Hello, nice to meet you " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    //remember that int type is size dependent. Since we are using small numbers, not concerned here.
    int fahrenheit = 100;
    int celsius;

    // celsius conversion:
    // 5 /  9 is a const expression so the compiler takes care of it, preventing the expression from making it to the code executed by the processor
    // furthermore, this executes as integer division which results in the quotient (i.e. if the result is a decimal, the quotient is zero because result has to be type int
    //celsius = (5 / 9) * (fahrenheit - 32);

    //to get correct converison, need floating point division
    // can do this with by casting, either by using static_cast or declaration
    celsius = (static_cast<float>(5) / 9.0) * (fahrenheit - 32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;

    //takes float weight minus int weight to result in the decimal places. Then multiply by sigfigs you want and then cast to int
    //note that floating numbers is an approximation with small errors, printing out as a double will get you more accurate result
    std::cout << "Fractional part: " << (double) ((weight - (int)weight)*10000) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

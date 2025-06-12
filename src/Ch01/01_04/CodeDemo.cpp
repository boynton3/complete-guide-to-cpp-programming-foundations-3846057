// Complete Guide to C++ Programming Foundations
// Exercise 01_04
// adding two integers

#include <iostream>
#include <cstdio>



//function declaration
int sum_integers(int x, int y) {
    return x + y;
}


int main(){
    //declare variable result that calls the sum_integers function, and sums integers 5 and 3 
    int result = sum_integers(5,3);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}


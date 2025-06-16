// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    //an array of int containing high scores
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages

    /*
    - pointer that points to highScores
    - essentially holds the address of the array's first element
    - i.e pointer refers directly to the array and allows access to array elements within the pointer 
    */

    // Pointer initialized to the address of the array
    int* scorePtr = highScores;
    //also can be written as int* scorePtr = &highScores[0]; which means the address of the first element of highScores

    //acess the contents of the array by dereferencing the point using *





    // Display the first high score using pointer
    std::cout << "Initial high score: " << *scorePtr << std::endl; 
    // Display the second high score using pointer by dereferencing the value of the pointer plus 1. remember the value of the pointer is the address of the first element of the array and to access that element, you dereference it 
    std::cout << "Second high score using pointer: " << *(scorePtr + 1) << std::endl;

    // pointers can iterate through data like arrays. squre bracket operator goes to the address of the array or pointer that's in the brackets and derefereence that data address
    std::cout << "Third high score using array notation: " << scorePtr[2] << std::endl;  
    
    //note that arrays are not mutable. You can assign different addresses to a pointer in runtime, but not for an array.

    std::cout << std::endl << std::endl;
    return 0;
}

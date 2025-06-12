// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>
/*
Global Variables:
    - global variables since same indentation as main()
    - global variables are accessible by all areas of the code
    - memory of global variables is handled statically by the compiler so allocated in data segment of memory
    - once program ends, memory is freed
    - best practice is to avoid global variables when possible
*/

int a, b = 5;

int main(){
    /*
    Local Variables/automatic variables:
        - variables defined inside functions or loops are local to their scope and not accessible outside 
        - variables deleted and memory freed once execution exits scope
        - managed by the compiler and allocated in the stack segment of memory (stack segment is temporary)
    */
   bool my_flag;
   a = 7;
   //note that flase is encoded as 0 in c++
   my_flag = false;
   std::cout << "a = " << a << std::endl;
   std::cout << "b = " << b << std::endl;
   std::cout << "flag = " << my_flag << std::endl;

   //code to toggle the flag and print out expressions
   my_flag = true;
    std::cout << "a + b = " << a + b << std::endl;
   std::cout << "b - a = " << b - a << std::endl;
   std::cout << "flag = " << my_flag << std::endl;

   // example declaring an unsigned variable to store a negative number
   // answer is 2^32 - 2 which is 2 represented in binary. The binary number is the same but interpretation is different. 
   unsigned int positive;
   positive = b - a;
   std::cout << "b - a (unsigned) = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

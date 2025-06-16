// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    //can add pointers to manage TimePoints dynamically 
    TimePoint *start, *end;

    //can allocate objects memory dynamically at it's declaration using a CONSTRUCTOR
    // a constructor always has the same name as the class and allows you to allocate memory using the new operator followed by a call to the constructor 
    //A constructor is a special method that is automatically called when an object of a class is created.
    // this returns a pointer to the allocated memory where the object is located 
    Duration *elapsed_seconds = new Duration();
    std::string input;

    //now that these are pointers, we need to assign new memory for them since we did not allocate any at their declaration 
    // here we can pass parameters to a constructor to set intial attributes of members 
    //here we have the new operator, the constructor TimePoint, and we are passing it a member of the Clock class that uses the member function now().
    start = new TimePoint(Clock::now());

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());

    // we then update this the subtract the pointers. Without this, it subtracts the addresses that start and end are pointing to. By dereferencing the objects, we get the values
    *elapsed_seconds = *end - *start;


    // note, a pointer does not have member functions so we can't use '.' operator to access objects. Because it is a pointer, we need to defreference the pointer first and then access the object like " (*elapsed_seconds).count() ". Alternatively, use the member of pointer operator which does this for you. Reads as 'count' is member of pointer 'elapsed_seconds'.
    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;

    //need to delete objects to free memory to avoid memory leakage 
    // this is a destructor
    delete start;
    delete end;
    delete elapsed_seconds;

    std::cout << std::endl << std::endl;
    return 0;
}

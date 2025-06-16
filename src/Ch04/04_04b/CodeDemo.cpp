// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
//includes classes to keep track of time:
#include <chrono>

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;
//using std::cout;
//using std::endl;


int main(){
    //declares two objects of TimePoint class to record time before and after users input
    TimePoint start, end;
    //duration object
    Duration elapsed_seconds;
    //string for user input 
    std::string input;
    //assigns current time to the 'start' object by calling the function from the system_clock class of library "chrono_system" and uses the member function 'now()'. The member function 'now()' is a static function (which is why we use '::' instead of '.' to access, that returns a std::chrono::time_point representing the current point in time. time_point is a template class which we'll get to later.
    start = Clock::now();


    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    // waits for user input to continue. note, that this does not verify the word 'start' is input
    std::cin >> input;

    end = Clock::now();
    //note that this will use the overloaded subtraction operator from the time_point class. Overloaded I think means that this class has it's own implementation for subtraction
    elapsed_seconds = end - start;

    //special notation for accessing a member of an object. Here we access the elapsed_seconds member using the count() function defined by the template class duration. This function returns elapsed time as a double.
    std::cout << "Reaction time: " << elapsed_seconds.count() << "s" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}

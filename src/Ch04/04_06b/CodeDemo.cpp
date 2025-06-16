// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> checkpoints = {"Start", "Forest", "Castle"};
    checkpoints.push_back("Cave");
    checkpoints.push_back("Finish");

    cout << "The game has " << checkpoints.size() << " checkpoints"  << endl;
    cout << "The first checkpoint is at the " << checkpoints[1] << endl;

    checkpoints[1] = "Dark Forest";
    cout << "The first checkpoint is now at the " << checkpoints[1] << endl;



    
    std::cout << std::endl << std::endl;
    return 0;
}

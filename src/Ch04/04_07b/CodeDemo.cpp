// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>
using namespace std;

int main(){
    // declare vector 'points' of class complex and type double 
    vector<complex<double>> points;

    points.push_back(complex<double>(3.5, 4.0));
    points.push_back(complex<double>(2.3, -1.9));
    points.push_back(complex<double>(-9.8, 3.2));
    points.push_back(complex<double>(6.2, 4.6));

    cout << "Points has " << points.size() << " elements." << endl;
    std::cout << std::endl << std::endl;

    cout << "The real number of element 1 is " << points[0].real() << endl;
    cout << "The imaginary number of element 1 is " << points[0].imag() << endl;
    std::cout << std::endl << std::endl;


    cout << "The real number of element 2 is " << (points.begin() + 1)->real() << endl;
    cout << "The imaginary number of element  2 is " << (points.begin() + 1)->imag() << endl;
    std::cout << std::endl << std::endl;

    //alternative ways to access vectors:
    cout << "The real number of element 3 is " << prev(points.end(), 2)->real() << endl;
    cout << "The imaginary number of element  3 is " << prev(points.end(), 2)->imag() << endl;
    std::cout << std::endl << std::endl;

    cout << "The real number of the last element is " << (points.end()-1)->real() << endl;
    cout << "The imaginary number of the last element is " << (points.end()-1)->imag() << endl;

   



    std::cout << std::endl << std::endl;
    return 0;
}

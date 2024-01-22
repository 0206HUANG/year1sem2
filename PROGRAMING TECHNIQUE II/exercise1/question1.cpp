//  question 1-2 : https://drive.google.com/file/d/1cfpjqVDSHpx_G3VS1Fxn7NeBAIT-_dOc/view?usp=drivesdk


// Exercise 1: Introduction to Classes and Objects
// Programming Technique II
// Semester 1, 2023/2024
// Date: 1//11/2023
// Section: 02
// Member 1's Name: HUANG BOSHENG  matric number: A22EC4032
// Member 2's Name:Tanshiba Naorin Prapti  matric number:A20EC4051
#include <iostream>
#include <cmath>
const double PI = 3.14159;
using namespace std;
class Cone
{
    private:
    double height;
    double radius;

public:
    void set_data(double r, double h){
        radius=r;
        height=h;
    }

    double calBaseArea(){
        return PI*radius*radius;
    }

    double calVolume()
    {
        return (1.0 / 3.0) * calBaseArea() * height;
    }
};

int main()
{
    Cone cn1;

    cn1.set_data(10,20);

    cout << "The cone basearea is: " << cn1.calBaseArea() << endl;
    cout << "The cone volume is " << cn1.calVolume() << endl;

    system ("pause");

    return 0;
}
//question3:  https://drive.google.com/file/d/1SgWph0k0LmpgDtLl-7TdvI21G_sM9tbN/view?usp=drivesdk

// Exercise 1: Introduction to Classes and Objects
// Programming Technique II
// Semester 1, 2023/2024
// Date: 1//11/2023
// Section: 02
// Member 1's Name: HUANG BOSHENG  matric number: A22EC4032
// Member 2's Name:Tanshiba Naorin Prapti  matric number:A20EC4051
#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
    Counter counter;
    counter.setMaxVal(100);
    counter.setCount(10);

    cout << "Initial counter value: " << counter.getCounter() << endl;  

    for (int i = 0; i < 25; i++)
    {
        counter.increment();
    }

    for (int i = 0; i < 12; i++)
    {
        counter.decrement();
    }

    counter.setCount(105);

    cout << "Final counter value: " << counter.getCounter() << endl;  

    system ("pause");

    return 0;
}


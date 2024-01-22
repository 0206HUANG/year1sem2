// Exercise 3
// Programming Technique II
// Semester 1, 2023/2024
// Date:09/12/2023
// Section: 02
// Member 1's Name: HUANG BOSHENG           MATRIC NUMBER:A22EC4032 
// Member 2's Name: TANSHIBA NAORIN PRAPTI  MATRIC NUMBER:A20EC4051
//link:  https://drive.google.com/file/d/1s20ZDUpgK32L10M_T-kgh_YgSxbpDpj8/view?usp=drivesdk
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1 = "Programming is a subject!";
    cout << str1 << endl;

    string str2 = str1.substr(0, 15) + " good " + str1.substr(17,25);
    cout << str2 << endl;

    str2.replace(11, 25, " reject! ");

    cout << str2 << endl;

    system("pause");
    
    return 0;
}
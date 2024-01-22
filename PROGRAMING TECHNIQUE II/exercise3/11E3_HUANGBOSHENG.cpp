// Exercise 3
// Programming Technique II
// Semester 1, 2023/2024
// Date:09/12/2023
// Section: 02
// Member 1's Name: HUANG BOSHENG           MATRIC NUMBER:A22EC4032 
// Member 2's Name: TANSHIBA NAORIN PRAPTI  MATRIC NUMBER:A20EC4051
//link:  https://drive.google.com/file/d/1s20ZDUpgK32L10M_T-kgh_YgSxbpDpj8/view?usp=drivesdk
#include <iostream>
#include <cstring>
using namespace std;

void phoneFormat(string& phoneNumber) {
    if (phoneNumber.length() != 11) {
        cout << "Invalid phone number" << endl;
        return;
    }

    phoneNumber.insert(3, "-");
    phoneNumber.insert(7, "-");

    phoneNumber = "+" + phoneNumber;
}

int main() {
   
    string phoneNumber;
    cout << "Enter your handphone no. -> ";
    cin >> phoneNumber;

    
    phoneFormat(phoneNumber);

   
    cout << "Your formatted handphone no. -> " << phoneNumber << endl;

    system("pause");

    return 0;
}

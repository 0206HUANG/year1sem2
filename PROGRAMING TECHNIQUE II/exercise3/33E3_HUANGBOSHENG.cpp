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

int main() {

  string students[] = {
    "Muhamad Husin, A123456",
    "Nor Asma, A156782",
    "Raja Kumar, A187623",
    "Muhamad Ali, A123908",
    "Ali Shah, A145234",
    "Nor Nadia, A128734",
    "Siti Sarah, A120945",
    "Siti Khadijah, A154237",
    "Syed Azman, A276456",
    "Chong Wei, A156278"
  };

  cout << "Searching Student's Info" << endl;
  cout << "------------------------" << endl;
  cout << "Enter the name or partial name," << endl;

  string search_name;
  cout << "you would like to search for: ";
  cin >> search_name;

  int numStudents = 10; 

  for (int i = 0; i < numStudents; i++) {
    if (students[i].empty()) { 
      break;
    }
    // Case-insensitive comparison
    if (students[i].find(search_name) != string::npos) {
      cout << students[i] << endl;
    }
  }

  system("pause");

  return 0;
}

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


string format_book_reference(string author_name, int year_published, string book_title) {

size_t space_pos = author_name.find(' ');
string first_name, last_name;

  if (space_pos != string::npos) {
    first_name = author_name.substr(0, space_pos);
    last_name = author_name.substr(space_pos + 1);
  } else {
    last_name = author_name;
  }

  
  string year_str = to_string(year_published); 

 
  string formatted_reference = last_name + ", " + first_name[0] + ". (" + year_str + "). " + book_title + ".";
  return formatted_reference;
}

int main() {
 
  string author_name;
  int year_published;
  string book_title;

  cout << "Enter author of the book -> ";
  getline(cin >> ws, author_name);

  cout << "Enter year of publication -> ";
  cin >> year_published;

  cout << "Enter a book title -> ";
  cin.ignore(); 
  getline(cin, book_title); 


  string formatted_book_reference = format_book_reference(author_name, year_published, book_title);
  cout << "The Formatted Book Reference:" << endl;
  cout << formatted_book_reference << endl;

  system("pause");

  return 0;
}

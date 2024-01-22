// Exercise 2
// Programming Technique II
// Semester 1, 2023/2024
// Date:4/12/2023
// Section: 02
// Member 1's Name: HUANG BOSHENG           MATRIC NUMBER:A22EC4032 
// Member 2's Name: TANSHIBA NAORIN PRAPTI  MATRIC NUMBER:A20EC4051
//link:  https://drive.google.com/file/d/1UnZ3hnDE--Zx0H43rt2mwKwlrgB8uSLM/view?usp=drivesdk
#include <iostream>
#include<cstring>
using namespace std;

//Software
class Software{
    private:
    string software1Name;
    string software2Name;

    public:
    Software()
    {
        cout<<"Software" << endl;
        cout<< "Dev C++" << endl;
        cout<<"-------" << endl;
        cout<<"RStudio\n" << endl;
 }
    
    Software(const string &name1, const string &name2)
    {
        cout<<"Enter 2 softwares" << endl;
        getline(cin, software1Name);
        getline(cin, software2Name);
    }

    Software(const Software &another)
    {
        cout << "\nSoftware: Copy constructor" << endl;
        cin >> software1Name;
        cin >> software2Name;
        software1Name = another.software1Name;
        software2Name = another.software2Name;
    }
    
    ~Software()
    {
        cout << "Software: " << software1Name << " and "<< software2Name << " are destroyed "<< endl;
        
    }
    
    string getSoftware1Name()const
    {
        return software1Name;
    }
    
    string getSoftware2Name()const
    {
        return software2Name;
    }
    
    void setSoftware1Name(const string &name)
    {
        software1Name=name;
    }

    void setSoftware2Name(const string &name)
    {
        software2Name=name;
    }

    friend ostream& operator <<(ostream& os, const Software& obj){
        os << "Software Names: " << obj.software1Name << " and "<< obj.software2Name;

    return os;
    }
};

//Hardware
class hardware
{
    private:
    char hardwareType1[50];
    char hardwareType2[50];

    public:
    hardware()
    {
        cout << "\nHardware " << endl;
        cout << "----------" << endl;
        cout << "desktop" << endl;
        cout << "mouse" << endl; 
    }

    hardware(const char *type1, const char *type2)
    {
        cout << "\nEnter 2 hardware" << endl;
        cin >> hardwareType1;
        cin >> hardwareType2;
    }

    hardware(const hardware &other)
    {
        cout << "\nHardware: Copy constructor" << endl;
        cin >> hardwareType1;
        cin >> hardwareType2;
    }

    const char *getHardwareType1() const
    {
        return hardwareType1;
    }

    const char *getHardwareType2() const
    {
        return hardwareType2;
    }

    void setHardwareType1()
    {
        cin >> hardwareType1;
    }

    void setHardwareType2()
    {
        cin >> hardwareType2;
    }

    ~hardware()
    {
        cout << "Hardware: " << hardwareType1 << " and " << hardwareType2 << " are destroyed " << endl;
    }

    friend ostream& operator << (ostream& os, const hardware& obj)
    {
        os << "Hardware Type: " << obj.hardwareType1 << " and " << obj.hardwareType2;
        return os;
    }


};

void software()
{
    Software mySoftware;
    Software mySoftware1("adobe", "microsoft");

    cout << "\nSoftware: Pointer of object call " << endl;
    Software *softwarePtr = new Software("android", "linux");

    Software copiedSoftware(*softwarePtr);
    cout << "\nDesctructor call" << endl;

    delete softwarePtr;
}

void hardware1()
{
    hardware myHardware;
    hardware myHardware1("desktop", "pinter");

    cout << "Hardware: Array of object call" << endl;

    hardware hardwareArray[2] = {hardware("L", "P"), hardware("X", "Y")};

    hardware copiedHardware(myHardware);
    cout << "\nDestructor call" << endl;
}

int main()
{
    software();
    hardware1();

    system ("pause");

    return 0;
}
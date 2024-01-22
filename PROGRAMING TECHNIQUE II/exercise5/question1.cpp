// Exercise 5
// Programming Technique II 
// Semester 1, 2023/2024
// Date:6/1/2024 
// Section: 02 
// Member 1's Name: HUANG BOSHENG             Matric Number: A22EC4032 
// Member 2's Name: TANSHIBA NAORIN PRAPTI    Matric Number: A20EC4051
//link:https://drive.google.com/file/d/1fTmgJyiK_DrKgzerC7wbLYjhIhVc7g_b/view?usp=drivesdk

#include <iostream>
#include <string>

using namespace std;

class Transport
{
    protected:

    string name;
    string yearBuilt;

    public:
    Transport(string n, string y)
    {
        name = n;
        yearBuilt = y;
    }
    
    void setName(string n)
    {
        name = n;
    }
    
    string getName() const
    {
       return name;
    }

    void setYearBuilt(string y)
    {
        yearBuilt = y;
    }
    
    string getYearBuilt() const
    {
        return yearBuilt;
    }
    
    virtual void print()const
    {
        cout << "Name: " << name <<", Year Built: "<< yearBuilt << endl;
    }
    
    virtual ~Transport()
    {
        cout << "Destroying Transport: " << name << endl;
    }
};

class Car : public Transport
{
    private:
    
    int maxPassengers;
    
    public:
    
    Car(string n, string y, int p): Transport(n, y)
    {
        maxPassengers = p;
    }
    
    void print() const
    {
        cout << "Car Name: " << name << ", Max Passengers: " << maxPassengers << endl;
        
    }
};

class Motor : public Transport
{
    private:
    
    int maxPassengers;
    
    public:
    Motor(string n, string y, int p) : Transport(n,y)
    {
        maxPassengers = p;
    }

    void print()const
    {
        cout << "Motor Name: " << name << ", Mas Passengers: " << maxPassengers << endl;

    }
};

int main()
{
    Transport* transports[3];
    
    transports [0] = new Transport ("luxury Transport", "2024");
    
    transports [1] = new Car ("Rolls-Royce Phantom", "2023", 4);
    
    transports [2] = new Motor ("Lamborghini Aventador", "2022" , 2);

    for ( int i = 0; i<3 ; i++)
    {
        transports[i] -> print();
    }
    
    cout << "Year Built for Rolls-Royce Phantom: "<< transports[1]->getYearBuilt() << endl;

    cout << "Year Built for Lamborghini Aventador: "<< transports[2]->getYearBuilt() << endl;
    
    for (int i =0; i < 3; i++)
    {
        delete transports[i];
    }
    
    system("pause");

    return 0;
    
}
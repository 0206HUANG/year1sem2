// Exercise 1: Introduction to Classes and Objects
// Programming Technique II
// Semester 1, 2023/2024
// Date: 1//11/2023
// Section: 02
// Member 1's Name: HUANG BOSHENG  matric number: A22EC4032
// Member 2's Name:Tanshiba Naorin Prapti  matric number:A20EC4051
#include <iostream>
using namespace std;

class fraction {
private:
    int num;
    int denom;

public:
    void setNum(int n) {
        num = n;
    }

    void setDenom(int d) {
        denom = d;
    }

    int getNum() {
        return num;
    }

    int getDenom() {
        return denom;
    }

    fraction multiply(fraction f) {
        fraction result;
        result.setNum(num * f.getNum());
        result.setDenom(denom * f.getDenom());

        return result;
    }

    fraction divide(fraction f) {
        fraction result;
        result.setNum(num * f.getDenom());
        result.setDenom(denom * f.getNum());

        return result;
    }

    fraction add(fraction f) {
        fraction result;
        result.setNum(num * f.getDenom() + f.getNum() * denom);
        result.setDenom(denom * f.getDenom());

        return result;
    }

    fraction subtract(fraction f) {
        fraction result;
        result.setNum(num * f.getDenom() - f.getNum() * denom);
        result.setDenom(denom * f.getDenom());

        return result;
    }

    void displayFrac() {
        cout << num << " / " << denom << endl;
    }

    void readFrac() {
        cout << "Enter the numerator: ";
        cin >> num;
        cout << "Enter the denominator: ";
        cin >> denom;
    }
};

int main() {
    fraction f1;
    fraction f2;
    fraction result;

    cout << "Please input fraction 1:" << endl;
    f1.readFrac();

    cout << "Please input fraction 2:" << endl;
    f2.readFrac();

    result = f1.multiply(f2);
    cout << "Multiplication result: ";
    result.displayFrac();

    result = f1.divide(f2);
    cout << "Division result: ";
    result.displayFrac();

    result = f1.add(f2);
    cout << "Addition result: ";
    result.displayFrac();

    result = f1.subtract(f2);
    cout << "Subtraction result: ";
    result.displayFrac();

    system("pause");
    
    return 0;
}

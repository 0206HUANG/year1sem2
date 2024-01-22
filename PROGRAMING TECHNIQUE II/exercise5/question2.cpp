// Exercise 5
// Programming Technique II 
// Semester 1, 2023/2024
// Date:6/1/2024 
// Section: 02 
// Member 1's Name: HUANG BOSHENG             Matric Number: A22EC4032 
// Member 2's Name: TANSHIBA NAORIN PRAPTI    Matric Number: A20EC4051
//link:https://drive.google.com/file/d/1fTmgJyiK_DrKgzerC7wbLYjhIhVc7g_b/view?usp=drivesdk
#include <iostream>
using namespace std;

class BasicShape
{
    private:

    double area;

    protected:
    void setArea(double a)
    {
        area = a;
    }

    public:

    double getArea() const
    {
        return area;
    }

    virtual void calArea() = 0;

    virtual ~BasicShape()
    {
        cout << "BasicShape object destroyed." << endl;
    }
};

class Circle : public BasicShape
{
    private:
    int centerX;
    int centerY;
    double radius;

    public:
    Circle(int x, int y, double r)
    {
        centerX = x;
        centerY = y;
        radius = r;
        calArea();
    }

    int getCenterX() const
    {
        return centerX;
    }

    int getCenter() const
    {
        return centerY;
    }

    void calArea()
    {
        double area = 3.14159 * radius * radius;
        setArea(area);
    }
};

class Rectangle : public BasicShape
{
    private:
    int width;
    int length;

    public:
    Rectangle(int w, int l)
    {
        width = w;
        length = l;
        calArea();
    }

    int getWidth() const
    {
        return width;
    }

    int getLength() const
    {
        return length;
    }

    void calArea()
    {
        double area = length * width;
        setArea(area);
    }
};

int main()
{
    Circle circle(5, 5, 5);
    Rectangle rectangle(15, 25);

    cout << "Circle Area: " << circle.getArea() << endl;
    cout << "Rectangle Area: " << rectangle.getArea() << endl;

    system("pause");

    return 0;
}
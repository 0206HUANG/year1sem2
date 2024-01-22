// Exercise 4 
// Programming Technique II 
// Semester 1, 2023/2024
// Date: 26/12/2023 
// Section: 02 
// Member 1's Name: HUANG BOSHENG           matric:A22EC4032
// Member 2's Name: TANSHIBA NAORIN PRAPTI  matric:A20EC4051
#include <iostream>
#include <string>

using namespace std;

class Teacher
{
    private:
    string firstName;
    string lastName;

    public: 
    Teacher (const string& fn, const string& ln)
    {
        firstName =fn;
        lastName =ln;
    }
    string getName()const
    {
        return firstName+" "+ lastName;
    }
};

class Student{
    private:
    string firstName;
    string lastName;

    public:
    Student(const string& fn, const string& ln)
    {
        firstName = fn;
        lastName = ln;
    }

string getName()const
{
return firstName + " " + lastName;
}
    
};
class Course
{
    private:
    string courseName;
    int studentCapacity;
    Teacher* teacher;
    Student** students;
    int studentCount;

    public:
    Course (const string& cn, int capacity, Teacher* t)
    {
        courseName = cn;
        studentCapacity = capacity;
        teacher = t;
        students = new Student*[studentCapacity];
        studentCount = 0;
    }

    ~Course()
    {
        delete[] students;
    }

    void addStudent (Student* s)
    {
        if (studentCount < studentCapacity)
        {
            students[studentCount++] = s;
        }

        else 
        {
            cout << "Cannot add student: Course is full." << endl;
        }
    }

    string getName() const
    {
        return courseName;
    }

    Student* getStudent(int index) const
    {
        if (index >= 0 && index < studentCount)
        {
            return students[index];
        }

        else
        {
            return nullptr;
        }
    }

};

class Department
{
    private:
    string departmentName;
    Course** courses;
    int courseCount;
    int courseCapacity;

    public:
    Department(const string& dn, int capacity)
    {
      departmentName = dn;
      courses = new Course*[capacity];
      courseCount = 0;
    }

    ~Department()
    {
        delete[] courses;
    }

    string getName() const
    {
        return departmentName;
    }

    void addCourse(Course* c)
    {
        if (courseCount < courseCapacity)
        {
            courses[courseCount] = c;
        }
        else
        {
            cout << "Cannot add course: Department is full." << endl;
        }
    }
};

class College
{
    private:
    string collegeName;
    Department** departments;
    int departmentCapacity;
    int departmentCount;

    public:
    College(const string& cn, int deptCap)
    {
        collegeName = cn;
        departmentCapacity = deptCap;
        departments = new Department*[departmentCapacity];
        departmentCount = 0;
    }

    ~College()
    {
        delete[] departments;
    }

    void addDepartment(Department* d)
    {
        if (departmentCount < departmentCapacity)
        {
            departments[departmentCount++] = d;
        }
        else
        {
            cout << "Cannot add department: College is full." << endl;
        }
    }

    string getName() const
    {
        return collegeName;
    }

    Department* getDepartment(int index) const
    {
        if (0 <= index && index < departmentCount)
        {
            return departments[index];
        }
        else
        {
            return nullptr;
        }
    }
};

int main()
{
    Student student1("HUANG", "BOSHENG");
    Student student2("TAN", "yiko");

    Teacher teacher1("Dr.", "Lee");

    Course course1 ("Mathematics", 30, &teacher1);
    course1.addStudent (&student1);
    course1.addStudent (&student2);

    Department* department1 = new Department("Science" , 10);
    department1->addCourse(&course1);

    College college1("UTM", 5);
    college1.addDepartment(department1);

    cout << "Student 1: " << student1.getName() << endl;
    cout << "Student 2: " << student2.getName() << endl;
    cout << "Course: " << course1.getName() << endl;
    cout << "Teacher: " << teacher1.getName() << endl;
    cout << "Department: " << department1->getName() << endl;
    cout << "College: " << college1.getName() << endl;

system("pause");
return 0;

}


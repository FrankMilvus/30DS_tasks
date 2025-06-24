// Basic Structure Implementation (Student Record)
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string Name;
    unsigned short int Age;

public:
    void setName(string name) { Name = name; }
    void setAge(unsigned short int age) { Age = age; }
    string getName() { return Name; }
    unsigned short int getAge() { return Age; }

    Student(string name, unsigned short int age)
    {
        setName(name);
        setAge(age);
    }
};

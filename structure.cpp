// Basic Structure Implementation (Student Record)
#include <iostream>
#include "./structureClass.cpp"
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<Student> students;
    students.push_back(Student("Petya", 20));
    students.push_back(Student("Vasya", 22));
    students.push_back(Student("Kolya", 21));

    cout << "Enter the name of the student: ";
    string name;
    cin >> name;

    for (auto &student : students)
    {
        if (student.getName() == name)
        {
            cout << "Found student: " << student.getName() << ", Age: " << student.getAge() << endl;
            return 0;
        }
    }
    cout << "there is no such guy, I'm so soryy" << endl;
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

class Student
{
    string name;
    int age;

public:
    void setName(string s)
    {
        name=s;
    }
    void setAge(int a)
    {
        if (a>0)
        {
            age=a;
        }
        else
        {
            age=1;
        }
    }
    void printDetails()
    {
        cout<<"Имя студента: "<<name<<endl;
        cout<<"Возраст студента: "<<age<<endl;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    Student testStudent;
    int age;
    string name;
    cout<<"Введите имя студента: "<<endl;
    cin>>name;
    cout<<"Введите возраст студента: "<<endl;
    cin>>age;
    testStudent.setAge(age);
    testStudent.setName(name);
    testStudent.printDetails();

    return 0;
}
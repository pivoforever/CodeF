#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

class Car
{
    string model;
    static int totalCount;

public:
    Car(string s)
    {
        model=s;
        totalCount++;
    }
    void printTotalCount()
    {
        cout << "Общее количество автомобилей: " << totalCount;
    }
};

int Car::totalCount = 0;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    string model;
    cout << "\n Введите название первой модели: " << endl;
    cin >> model;
    Car test1(model);
    cout << "Введите название второй модели: " << endl;
    cin >> model;
    Car test2(model);
    cout << "Введите название третьей модели: " << endl;
    cin >> model;
    Car test3(model);
    test1.printTotalCount();
    return 0;
}
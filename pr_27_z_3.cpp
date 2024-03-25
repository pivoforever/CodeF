#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

template <class Type>
Type area(Type a , Type b)
{
    return a*b;
}

template <class Type>
Type area(Type a, int choice)
{
    if (choice==1) return a*a;
    else return a*a*3.14;
}


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
int choice;
    cout << "Выберите фигуру (1 - квадрат, 2 - прямоугольник, 3 - круг): ";
    cin >> choice;

    if (choice == 1) {
        double side;
        cout << "Введите сторону квадрата: ";
        cin >> side;
        cout << "Площадь квадрата: " << area(side, choice) << endl;
    }
    else if (choice == 2) {
        double width, height;
        cout << "Введите ширину и высоту прямоугольника: ";
        cin >> width >> height;
        cout << "Площадь прямоугольника: " << area(width, height) << endl;
    }
    else if (choice == 3) {
        double radius;
        cout << "Введите радиус круга: ";
        cin >> radius;
        cout << "Площадь круга: " << area(radius, choice) << endl;
    }
    else {
        cout << "Неверный выбор." << endl;
    }

    return 0;
}


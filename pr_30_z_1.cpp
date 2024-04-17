#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>
#include <format>

using namespace std;

class MyRectangle
{
    double width;
    double height;

public:
    MyRectangle(double w, double h)
    {
        if (w > 0 && h > 0)
        {
            width = w;
            height = h;
        }
        else
        {
            width = 1;
            height = 1;
        }
    }
    ~MyRectangle()
    {
        cout << "Destructor object" << endl;
    }
    void setDimentions(double w, double h)
    {
        if (w > 0 && h > 0)
        {
            width = w;
            height = h;
        }
        else
        {
            width = 1;
            height = 1;
        }
    }
    double getArea()
    {
        return width * height;
    }
    void printDetails()
    {
        cout << "Ширина прямоугольника: " << width << endl;
        cout << "Высота прямоугольника: " << height << endl;
        cout << "Площадь прямоугольника: " << getArea() << endl;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    double w, h;
    cout << "Введите ширину и высоту прямоугольника через пробел: " << endl;
    cin >> w;
    cin >> h;
    MyRectangle *ptrRectangle = new MyRectangle(w, h);
    // testRectangle.setDimentions(w, h);
    ptrRectangle->printDetails();
    cout << endl
         << "Введите новую ширину и высоту прямоугольника через пробел: " << endl;
    cin >> w;
    cin >> h;
    ptrRectangle->setDimentions(w, h);
    ptrRectangle->printDetails();
    delete ptrRectangle;

    return 0;
}
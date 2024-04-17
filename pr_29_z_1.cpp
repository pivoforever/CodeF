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
    void setDimentions(double w,double h)
    {
        if (w>0 && h>0)
        {
            width=w;
            height=h;
        }
        else
        {
            cout<<"Длинна и ширина прямоугольника должны быть положительными.";
        }
        
        
    }
    double getArea()
    {
        return width*height;
    }
    void printDetails()
    {
        cout<<"Ширина прямоугольника: "<<width<<endl;
        cout<<"Высота прямоугольника: "<<height<<endl;
        cout<<"Площадь прямоугольника: "<<getArea()<<endl;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "eng");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    MyRectangle testRectangle;
    double w,h;
    cout<<endl<<"Введите ширину и высоту прямоугольника через пробел: "<<endl;
    cin>>w; cin>>h;
    testRectangle.setDimentions(w,h);
    testRectangle.printDetails();

    return 0;
}
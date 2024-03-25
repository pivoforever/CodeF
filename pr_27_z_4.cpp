#include <iostream>
using namespace std;

void display(int x, int y);
void display(int x);


int main()
{
    setlocale(0, "");
    void display(int x, int y)
    {
        cout << "Локальная функция: " << x + y << endl;
    }
    //display(5);
    display(3, 4);

    return 0;
}

void display(int x)
{
    cout << "Глобальная функция: " << x << endl;
}
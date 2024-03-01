#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

void arrayMaxMin(int myArray[], int size, int *max, int *min);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    cout << "Введите размер массива:" << endl;
    int size, max, min;
    cin >> size;
    int *myArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        myArray[i] = rand() % 100 - 50;
        cout << myArray[i] << " ";
    }
    cout<<endl;
    arrayMaxMin(myArray, size, &max, &min);
    cout << "Максимальный элемент массива: " << max << endl;
    cout << "Минимальный элемент массива: " << min << endl;
    return 0;
}

void arrayMaxMin(int myArray[], int size, int *max, int *min)
{
    *max = myArray[0];
    *min = myArray[0];
    for (int i = 0; i < size; i++)
    {
        if (myArray[i] > *max)
            *max = myArray[i];
        if (myArray[i] < *min)
            *min = myArray[i];
    }
}

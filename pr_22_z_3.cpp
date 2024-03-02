#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

 void createFunc(string, string);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    string sortFunc=argv[1], printFunc=argv[2];
    createFunc(sortFunc, printFunc);
    return 0;
}

void createFunc(string sortFunc, string printFunc)
{
    cout << "Введите размер массива:" << endl;
    int size;
    cin >> size;
    int *myArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        myArray[i] = rand() % 100 - 50;
    }
    
    cout<<endl;
}

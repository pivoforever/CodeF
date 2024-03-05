#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

void createFunc(void (*sortFunc)(int*, int));
void printFunc(int myArray[], int size);
void bubbleSortFunc(int myArray[], int size);
void instSortFunc(int myArray[], int size);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    cout<<"Выберите функцию для сортировки массива:"<<endl;
    cout<<"1 - пузырьком"<<endl;
    cout<<"2 - вставками"<<endl;
    int typeSort;
    cin>>typeSort;
    if(typeSort==1) createFunc(bubbleSortFunc);
    else if(typeSort==2) createFunc(instSortFunc);
    else cout<<"Неверно выбрана цифра метода сортировки!"<<endl;
    return 0;
}

void createFunc(void (*sortFunc)(int*, int))
{
    cout << "Введите размер массива:" << endl;
    int size;
    cin >> size;
    int *myArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        myArray[i] = rand() % 100 - 50;
    }
    printFunc(myArray, size);
    sortFunc(myArray, size);
    printFunc(myArray, size);
    cout << endl;
}

void printFunc(int myArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << "\t";
    }
    cout << endl;
}

void bubbleSortFunc(int myArray[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int k = 0; k < size - i; k++)
        {
            if (myArray[k] > myArray[k + 1])
            {
                int tmp = myArray[k];
                myArray[k] = myArray[k + 1];
                myArray[k + 1] = tmp;
            }
        }
    }
}

void instSortFunc(int myArray[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int k = i;
        while (k > 0 && myArray[k - 1] > myArray[k])
        {
            int tmp = myArray[k - 1];
            myArray[k - 1] = myArray[k];
            myArray[k] = tmp;
            k = k - 1;
        }
    }
}

#include <iostream>
#include <string>
#include "user.h"

using namespace std;

void printUser(user *user)
{
    cout << "Имя:\t" << user->name <<"\t Фамилия:\t" << user->surname <<"\t Возраст:\t" << user->age << endl;
}

void addUser(user allUser[], int &size, string name, string sername, int age)
{
    allUser[size].name = name;
    allUser[size].surname = sername;
    allUser[size].age = age;
    size++;
}

user *findUser(user allUser[], int size, string name)
{
    for (size_t i = 0; i < size; i++)
    {
        if (allUser[i].name == name)
            return allUser + i;
    }
    return nullptr;
}
void deleteUser(user allUser[], int &size, string name)
{
    user *ptr = findUser(allUser, size, name);
    if (ptr != nullptr)
    {
        int st = 0;
        while (allUser[st].name != name)
        {
            st++;
        }
        for (size_t i = st + 1; i < size; i++)
        {
            allUser[i - 1] = allUser[i];
        }
        size--;
    }
    else
    {
        cout << "Такого имени нет в списке.";
    }
}
#include <iostream>
#include <cstdlib>
#include <clocale>
#include <Windows.h>

using namespace std;

void compare(int, int);
void finPlay(int);
void help(int, int, int);

int main(int argc, char const *argv[])
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    //setlocale(LC_ALL,"Russian");
    int secret = 50, cnt = 0;
    compare(secret, cnt);
    return 0;
}

void compare(int secret, int cnt)
{
    int playerNumber;
    cout << "Введите свое число:" << endl;
    cin >> playerNumber;
    cnt++;
    if (secret == playerNumber)
    {
        finPlay(cnt);
    }
    else
    {
        help(secret, playerNumber, cnt);
    }
}

void finPlay(int cnt)
{
    cout << "Поздравляю, вы выиграли на " << cnt << " ходу.";
    cin.get();
}

void help(int secret, int playerNumber, int cnt)
{
    if (secret < playerNumber)
    {
        cout << "Вы ввели слишком большое число.";
        compare(secret, cnt);
    }
    else
    {
        cout << "Вы ввели слишком маленькое число.";
        compare(secret, cnt);
    }
}
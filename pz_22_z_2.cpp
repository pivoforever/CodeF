#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    cout << argc<<endl;
    if (argc > 1)
    {
        cout<<atoi(argv[1])<<endl;
        if (atoi(argv[1]) % 2 == 0)
        {
            cout << "Число в аргументе main четное." << endl;
        }
        else
        {
            cout << "Число в аргументе main нечетное." << endl;
        }
    }
    cin.get();
    return 0;
}

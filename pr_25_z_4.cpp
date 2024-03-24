#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;

// Рекурсивная функция для генерации всех подмножеств
void generateSubsets(const vector<int> &originalSet, vector<int> &currentSubset, int index)
{
    // Выводим текущее подмножество
    for (int element : currentSubset)
    {
        cout << element << " ";
    }
    cout << endl;

    // Рекурсивно добавляем следующий элемент к текущему подмножеству
    for (int i = index; i < originalSet.size(); ++i)
    {
        currentSubset.push_back(originalSet[i]);
        generateSubsets(originalSet, currentSubset, i + 1);
        currentSubset.pop_back();
    }
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Russian");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    int n;
    cout << "Введите количество элементов множества: ";
    cin >> n;

    vector<int> originalSet(n);
    cout << "Введите элементы множества через пробел: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> originalSet[i];
    }

    vector<int> currentSubset;
    generateSubsets(originalSet, currentSubset, 0);

    return 0;
}
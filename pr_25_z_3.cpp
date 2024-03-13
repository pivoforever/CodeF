// Реализация алгоритма сортировки слиянием
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15
// Объединяем два отсортированных подмассива `arr[low…mid]` и `arr[mid+1…high]`
void Merge(int arr[], int aux[], int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;
    // пока есть элементы в левом и правом рядах
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            aux[k++] = arr[i++];
        }
        else
        {
            aux[k++] = arr[j++];
        }
    }
    // копируем оставшиеся элементы
    while (i <= mid)
    {
        aux[k++] = arr[i++];
    }
    // Вторую половину копировать не нужно (поскольку остальные элементы
    // уже находятся на своем правильном месте во вспомогательном массиве)
    // копируем обратно в исходный массив, чтобы отразить порядок сортировки
    for (int i = low; i <= high; i++)
    {
        arr[i] = aux[i];
    }
}
// Сортируем массив `arr[low…high]`, используя вспомогательный массив `aux`
void mergesort(int arr[], int aux[], int low, int high)
{ // базовый вариант
    if (high <= low)
    { // если размер прогона <= 1
        return;
    }
    // найти середину
    int mid = (low + ((high - low) >> 1));
    // рекурсивно разделяем прогоны на две половины до тех пор, пока размер прогона не станет<= 1,
    //  затем объединяем их и возвращаемся вверх по цепочке вызовов
    mergesort(arr, aux, low, mid);      // разделить/объединить левую половину
    mergesort(arr, aux, mid + 1, high); // разделить/объединить правую половину
    Merge(arr, aux, low, mid, high);    // объединить два полупрогона.
}
// Функция для проверки, отсортирован ли arr в порядке возрастания или нет
int isSorted(int arr[])
{
    int prev = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (prev > arr[i])
        {
            printf("MergeSort Fails!!");
            return 0;
        }
        prev = arr[i];
    }
    return 1;
}
int main(void)
{
    int arr[N], aux[N];
    srand(time(NULL));
    // генерируем случайный ввод целых чисел
    for (int i = 0; i < N; i++)
    {
        aux[i] = arr[i] = (rand() % 100) - 50;
    }
    // сортируем массив `arr`, используя вспомогательный массив `aux`
    mergesort(arr, aux, 0, N - 1);
    if (isSorted(arr))
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
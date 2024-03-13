#include <iostream>
void sort(int[], size_t, size_t);
void swap(int[], size_t, size_t);
int main()
{
    int nums[]{3, 0, 6, -2, -6, 11, 3};
    sort(nums, 0, std::size(nums) - 1);
    for (auto num : nums)
    {
        std::cout << num << "\t";
    }
    std::cout << std::endl;
}
void sort(int numbers[], size_t start, size_t end)
{
    // начальный индекс должен быть меньше конечного индекса для массива из 2 и более элементов
    if (start >= end)
        return;
    // проверяем все элементы относительно элемента с индексом start
    size_t current{start};
    for (size_t i{start + 1}; i <= end; i++)
    {
        // если i-ый элемент меньше начального
        if (numbers[i] < numbers[start])
        {
            swap(numbers, ++current, i); // меняем его с левым
        }
    }
    swap(numbers, start, current); // Меняем выбранный (start) и последний обмененный элементы
    if (current > start)
    {
        sort(numbers, start, current - 1); // Сортируем элементы слева
    }
    if (end > current + 1)
    {
        sort(numbers, current + 1, end); // Сортируем элементы справа
    }
}
void swap(int numbers[], size_t first, size_t second)
{
    auto temp{numbers[first]};
    numbers[first] = numbers[second];
    numbers[second] = temp;
}
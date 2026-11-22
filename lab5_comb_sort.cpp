#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

void fillArray(vector<int> &numbers, int size)
{
    for (int i = 0; i < size; i++)
    {
        numbers[i] = rand() % 101;
    }
}

void printArray(const vector<int> &numbers, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
}

void combSort(vector<int> &numbers, int size)
{
    int gap = size;
    bool wasSwap = true;

    while (gap > 1 || wasSwap)
    {
        gap = gap / 1.3;

        if (gap < 1)
        {
            gap = 1;
        }

        wasSwap = false;

        for (int i = 0; i + gap < size; i++)
        {
            if (numbers[i] > numbers[i + gap])
            {
                int temporary = numbers[i];
                numbers[i] = numbers[i + gap];
                numbers[i + gap] = temporary;

                wasSwap = true;
            }
        }
    }
}

int main()
{
    int n = 0;

    cout << "Введите размер массива: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Ошибка: размер должен быть больше нуля и должен быть числом." << endl;
        return 1;
    }
    vector<int> numbers(n);
    srand(time(NULL));
    fillArray(numbers, n);
    cout << endl;
    cout << "Массив до сортировки:" << endl;
    printArray(numbers, n);
    combSort(numbers, n);
    cout << endl;
    cout << "Массив после сортировки расчёской:" << endl;
    printArray(numbers, n);

    return 0;
}
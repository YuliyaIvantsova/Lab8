#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");

    int n;
    cout << "Введите длинну массива: ";
    cin >> n;

    int* mass = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << "е отрицательное число: ";
        cin >> mass[i];
    }

    int max = mass[0];

    for (int i = 0; i < n; i++)
    {
        if (mass[i] < 0 && max < mass[i])
        {
            max = mass[i];
        }
    }
    cout << endl;
    cout << "Максимальный отрицательный элемент: " << max << endl;
    return 0;
}
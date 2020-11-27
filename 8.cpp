#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");

    int n, a, b;
    int n1 = 0;
    cout << "Введите длинну массива: ";
    cin >> n;
    int* mass = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << "-й элемент: ";
        cin >> mass[i];
    }

    cout << "Введите начало интервала: ";
    cin >> a;
    cout << "Введите конец интервала: ";
    cin >> b;

    cout << "Массив до операции: ";
    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (mass[i] < a || mass[i] > b)
        {
            mass[n1++] = mass[i];
        }
    }

    cout << "Массив после удаления чисел, входящих в заданный интервал: ";
    for (int i = 0; i < n1; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
    return 0;
}
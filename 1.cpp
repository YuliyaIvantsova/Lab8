#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");

    int a, b, n;
    cout << "Введите длину массива: ";
    cin >> n;
    int* mass = new int[n];
    cout << "Массив до операции:" << endl;
    for (int i = 0; i < n; i++)
    {
        mass[i] = rand() % 20;
        cout << mass[i] << " ";
    }
    cout << endl;
    cout << "Введите начало интервала: ";
    cin >> a;
    cout << "Введите конец интервала: ";
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        if (mass[i] >= a && mass[i] <= b)
        {
            mass[i] = 0;
        }
    }
    cout << "Массив после замены всех чисел, входящих в интервал, нулём: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
    return 0;
}
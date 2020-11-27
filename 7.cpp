#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");

    int n;
    int n1 = 0; 

    cout << "Введите длинну массива: ";
    cin >> n;
    int* mass = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << "й элемент: ";
        cin >> mass[i];
    }

    cout << "Массив до операции: ";
    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
    
    cout << "Массив после удаления из него всех чётных чисел: ";
    for (int i = 0; i < n; i++)
    {
        if (mass[i] % 2 != 0)
        {
            mass[n1++] = mass[i];
        }
    }

    for (int i = 0; i < n1; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
    return 0;
}
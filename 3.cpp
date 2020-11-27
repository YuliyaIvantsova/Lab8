#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    double n, * mass; 
    int sum = 0;
    cout << "Введите длину массива: " << endl;
    cin >> n;
    if (n <= 10)
    {
        mass = new double[n];
        cout << "Массив: " << endl;
        for (int i = 0; i < n; i++) 
        {
            mass[i] = rand() % 101 - 50;
        }

        for (int i = 0; i < n; i++) 
        {
            cout << mass[i] << endl;
        }

        for (int i = 0; i < n; i++) 
        {
            sum += mass[i];
        }
        cout << "Сумма действительных чисел массива: " << sum << endl;
    }
    else
    {
        cout << "Вы ввели число больше 10!";
    }
    system("pause");
}
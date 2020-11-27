#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");

    const int n = 3;
    int mass[n][n];
    float sum = 0;
    float sredn = 0;
    int k = 0;

    cout << "Массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mass[i][j] = rand() % 10;
            if (i > j && mass[i][j] % 2 == 0)
            {
                sum += mass[i][j];
                k++;
            }
        }
    }

    sredn = sum / k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Среднее арифметическое четных элементов ниже главной диагонали: " << sredn << endl;
    return 0;
}
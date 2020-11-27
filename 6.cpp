#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");

    int mass[3][3];
    int max = mass[0][0];

    cout << "Массив: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mass[i][j] = rand() % 10;
            if (mass[i][j] > max)
            {
                max = mass[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Максимальный элемент: " << max << endl;
    return 0;
}
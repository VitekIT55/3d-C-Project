#include <iostream>

using namespace std;

void FindNumbers(int a, int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0 && a == 0) //Четные
            cout << i;
        else if (i % 2 > 0 && a == 1) //Нечетные
            cout << i;
        else if (N != i && i > 1)
            cout << ", ";
    }
    cout << endl;
}

int main()
{
    system("chcp 1251>nul");
    int a, Limit;
    cout << "Введите цифру:\n0. Четные;\n1. Нечетные.\nСтрока для ввода: "; cin >> a;
    if (a != 0 && a != 1)
    {
        cout << "Ошибка! Такого числа нет в списке!\n";
        return 0;
    }
    cout << "Введите границу поиска чисел: "; cin >> Limit;
    if (a == 0)
        cout << "Четные числа: ";
    else
        cout << "Нечетные числа: ";
    FindNumbers(a, Limit);
}

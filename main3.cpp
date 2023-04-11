#include<iostream>

using namespace std;

int main()
{
    int chislo;

    cout << "Введите число: " << endl;
    cin >> chislo;

    if (chislo == 0)
    {
        cout << "Вы ввели 0" << endl;
    }
    else
        if (chislo % 2 != 0)
        {
            cout << "Число не четное!!" << endl;
        }
        else
        {
            cout << "Число четное!!" << endl;
        }
}
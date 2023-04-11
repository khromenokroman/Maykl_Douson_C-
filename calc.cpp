#include<iostream>
using namespace std;

int main()
{
    float chislo1,chislo2;
    int oper;

    cout << "Введите 2 числа: " << endl;
    cin >> chislo1 >> chislo2;
    
    cout << "Что будем делать: " << endl <<
                "\t1.Сложение" << endl <<
                "\t2.Вычитание" << endl <<
                "\t3.Деление" << endl <<
                "\t4.Умножение" << endl;
    cin >> oper;

    switch (oper)
    {
    case 1:
        cout << (chislo1 + chislo2) << endl;
        break;
    case 2:
        cout << chislo1 - chislo2 << endl;
        break;    
    case 3:
        cout << (float)(chislo1 / chislo2) << endl;
        break;
    case 4:
        cout << chislo1 * chislo2 << endl;
        break;    
    default:
        break;
    }
}
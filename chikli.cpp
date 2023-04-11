#include<iostream>
using namespace std;

int main()
{
    int COUNT = 60;
    string SIMBOL = "*";

    while (COUNT != 0)
    {
        cout << SIMBOL;
        COUNT--;
        
        if (COUNT == 0)
            {
                cout << endl;
            }
    }
  

    int chislo1, chislo2, sum = 0;

    cout << "Введите диапазан числел: " << endl;

    cin >> chislo1 >> chislo2;

    while (chislo1 <= chislo2)
    {
        sum += chislo1;
        chislo1++;
    }
    cout << sum << endl;
    

}
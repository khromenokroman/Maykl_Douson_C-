#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<unistd.h>

using namespace std;


int main()
{
    int user_number = 0, attempt = 0, pc_number = 0, deviation;

    cout << "Загадай число: ";
    cin >> user_number;
    
    
    //делаем чтобы было случайное число
    srand(static_cast<unsigned int>(time(0)));
    pc_number = (rand() % 100) + 1;

    while (user_number != pc_number)
    {
        //делаем чтобы было случайное число
        srand(static_cast<unsigned int>(time(0)));
        pc_number = (rand() % 100) + 1;
        cout << "Мое число: " << pc_number << endl;

        deviation = abs(pc_number - user_number);
        
        attempt++;
        sleep(1);
        
        if (deviation == 0)
        {
            cout << "************************************" << endl;
            cout << "**********!!!!Угадал!!!!************" << endl;
            cout << "************************************" << endl;
            cout << "Было использованно попыток: " << attempt << endl;
        }
        

    }
    
    return 0;
}
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;


int main()
{
    //делаем чтобы было случайное число
    srand(static_cast<unsigned int>(time(0)));
    int random_number = (rand() % 100) + 1;
    int user_try = 0, user_number = 0, attempt = 0;

    cout << "Описание игры:\n\nКомпьютер загадывает число, тебе надо это число угадать, все просто :)\n\n" <<
    "Если видишь сообщение \"Очень далеко\" занчит разница больше 30\n" << 
    "Если видишь сообщение \"Почти угадал\" занчит разница от 15 до 30\n" << 
    "Если видишь сообщение \"Совсем близко\" занчит разница от 5 до 15\n" <<
    "Если видишь сообщение \"Рикошет\" занчит разница от 1 до 5\n" << endl;

    //cout << "Случайное число: " << random_number << endl;
   

    while (user_number != random_number)
    {
        //system("clear");
        cout << "Введите случайное число: ";
        cin >> user_number;

        int deviation = abs(random_number - user_number);

        if (deviation >= 30)
        {
            cout << "Очень далеко...\n";
        }
        else if (deviation >= 15 && deviation < 30)
        {
            cout << "Почти угадал...\n";
        }
        else if (deviation >= 5 && deviation <15)
        {
            cout << "Совсем близко...\n";
        }
        else if (deviation > 0 && deviation <5)
        {
            cout << "Рикошет...\n";
        }
        else if (deviation == 0)
        {
            cout << "************************************" << endl;
            cout << "**********!!!!Угадал!!!!************" << endl;
            cout << "************************************" << endl;
            cout << "Было использованно попыток: " << attempt << endl;
        }
        attempt++;

    }
    
    return 0;
}
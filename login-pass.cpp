#include<iostream>

using namespace std;

int main()
{
    string login, password;
    bool repeat = false;

    do
    {
        
        cout << "Введите логин:" << endl;
        cin >> login;
        cout << "Введите пароль:" << endl;
        cin >> password;

        if (login == "roma" && password == "123")
        {
            cout << "Добро пожаловать " << login << endl;
            system("uname -a");
            repeat = false;
        }
        else
        {
            cout << "Доступ запрещен!!!" << endl;
            repeat = true;
            system("clear");
        }

    } while (repeat);


}
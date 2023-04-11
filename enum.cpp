#include<iostream>
using namespace std;

int main()
{

    enum slognost {EASY, HARD};
    slognost game_slognost = EASY;

    switch (game_slognost)
    {
    case 0:
        cout << "Сложность игры: Легко" << endl;
        break;
    case 1:
        cout << "Сложность игры: Сложно" << endl;
        break;
    
    default:
        break;
    }


    enum score {LOW = 10, MEDIUM, HIGHT = 20};
    score myscore = MEDIUM;


    //cout << "Сложность игры: " << game_slognost << endl;

    cout << "Очки: " << myscore << endl;

    cout << "Seven divided Ьу three is " << 7.0 / 3.0 << endl;

    float a,b,c,answer;
    cout << "введите 3 числа: " << endl;
    cin >> a >> b >> c;

    answer = (a+b+c)/3;

    cout << "Среднее: " << answer << endl;
    
    system("clear");

    return 0;
}
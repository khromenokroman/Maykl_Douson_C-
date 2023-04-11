#include<iostream>
#include<cstdlib>
using namespace std;

int roller, data_rand = 0;

int main()
{
    //делаем чтобы было случайное число
    srand(static_cast<unsigned int>(time(0)));
    data_rand = rand();
    
    cout << "Максимальное число: " <<RAND_MAX << endl;
    cout << "Случайное число: "<< data_rand << endl;
    
    roller = (data_rand % 6) + 1;
    cout << "Случайное кости: "<< roller << endl;

}
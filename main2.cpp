#include<iostream>

using namespace std;


int main()
{

    float answer1, answer2, answer3, sum, umn, del;


    cin >> answer1 >> answer2 >> answer3; 

    sum = answer1 + answer2 + answer3;
    umn = answer1 * answer2 * answer3;
    del = answer1 / answer2 / answer3;

    cout << "sum: " << sum << "\nunm: " << umn << "\ndel: " << del << endl;
}
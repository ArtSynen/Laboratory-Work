#include <iostream>
using namespace std;

int main()
{
    int numb, pers, val;
    const int p = 100;
    cout << "Input a number ";
    cin >> numb;
    cout << "Input persent of number ";
    cin >> pers;
    cout << "Value = " << (numb / p) * pers;
}

#include <iostream>
using namespace std;

int main()
{
    float n, val = 0, derNum, delNum = 0, defNum = 0;
    while (true)
    {
        cout << " Input how many numbers ";
        cin >> n;
        for ( int i = 0; i < n; i++ )
        {
            cout << " Input number ";
            cin >> derNum;
            val += derNum;
            if (derNum > delNum) delNum = derNum;
            if (i == 0) defNum = derNum;
            if (derNum < defNum) defNum = derNum;
        }
        cout << "Average of numbers = " << val/n <<"\n";
        cout << "Min of numbers = " << defNum << "\n";
        cout << "Max of numbers = " << delNum << "\n";
    }
}

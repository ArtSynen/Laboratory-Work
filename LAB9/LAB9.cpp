#include <iostream>
using namespace std;

int n, l, mMax, mMin;

void MaxMin(int n, int l)
{
    int** array = new int* [n];
    for (int i = 0; i < n; i++)
    {
        array[i] = new int[l];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << "Enter number in array[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
    mMin = array[0][0];
    mMax = array[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (array[i][j] < mMin)
            {
                mMin = array[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (array[i][j] > mMax)
            {
                mMax = array[i][j];
            }
        }
    }
}
int main()
{
    cout << "Enter number of row = ";
    cin >> n;
    cout << "Enter number of column = ";
    cin >> l;
    MaxMin(n, l);
    cout << "Min number of array = " << mMin << "\n";
    cout << "Max number of array = " << mMax << "\n";
}

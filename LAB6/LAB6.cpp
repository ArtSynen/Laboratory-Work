#include <iostream>
using namespace std;

int FRes, SRes, CircResis;
string ConnType;
void ÑircRes(int FRes, int SRes, string ConnType)
{
    if (ConnType == "Serial")
    {
        CircResis = FRes + SRes;
        cout << "Circuit resistance = " << CircResis;
    }
    if (ConnType == "Parallel")
    {
        CircResis = (FRes * SRes) / (FRes + SRes);
        cout << "Circuit resistance = " << CircResis;
    }
    if (ConnType != "Serial" && ConnType != "Parallel")
    {
        cout << "Error! Write type correct ";
    }
}
int main()
{
    cout << "Resistence of first rethistor = "; 
    cin >> FRes;
    cout << "Resistence of first rethistor = ";
    cin >> SRes;
    cout << "Connection type?(Serial or Parallel) ";
    cin >> ConnType;
    ÑircRes(FRes, SRes, ConnType);
}

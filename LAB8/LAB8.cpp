#include <iostream>
using namespace std;

int len1;
string mes, revmes = " ";
int main()
{
    cout << "Enter your FullName, Name, SurName ";
    cin >> mes;
    string meslist(mes);
    len1 = meslist.length();
    //len2 = list.length();
    for (int i = 0; i < len1; i++)
    {
        if (islower(meslist[i]))
        {
            meslist[i] = meslist[i] - 32;

        }
    }
    revmes = meslist;
    for (int i = 0; i < len1; i++)
    {
        revmes[i] = meslist[len1 - i - 1];
    }
    cout << revmes;
}

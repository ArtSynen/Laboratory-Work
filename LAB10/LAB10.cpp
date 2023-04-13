#include <iostream>
using namespace std;



int main()
{
    int DatBas, m;
    cout << "Amount of data 3 ( if ypu need more change it in the project )\n";
    struct data
    {
        char NOfSets[30];
        int AmOfSets;
        int Price;
        char TypeOfPack[30];
        char Address[30];
    }DataBase[3], a;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name of sets ";
        cin >> DataBase[i].NOfSets;
        cout << "Enter amount of sets ";
        cin >> DataBase[i].AmOfSets;
        cout << "Enter price ";
        cin >> DataBase[i].Price;
        cout << "Enter type of packaging ";
        cin >> DataBase[i].TypeOfPack;
        cout << "Enter adress ";
        cin >> DataBase[i].Address;
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (DataBase[i].AmOfSets > DataBase[i + 1].AmOfSets)
            {
                a = DataBase[i];
                DataBase[i] = DataBase[i + 1];
                DataBase[i + 1] = a;
            }
        }
    }
    cout << "The lowest amounts of sets have:";
    cout << DataBase[0].NOfSets << " ";
    cout << DataBase[0].AmOfSets << " ";
    cout << DataBase[0].Price << " ";
    cout << DataBase[0].TypeOfPack << " ";
    cout << DataBase[0].Address << "\n";
    cout << "The biggest amounts of sets have:";
    cout << DataBase[2].NOfSets << " ";
    cout << DataBase[2].AmOfSets << " ";
    cout << DataBase[2].Price << " ";
    cout << DataBase[2].TypeOfPack << " ";
    cout << DataBase[2].Address << "\n";
    system("PAUSE");
    return 0;

    //cout << "The biggest amounts of sets have:";
    //printf("%d\n  %s\n %s\n  %d\n  %d\n ", DataBase[1].NOfSets, DataBase[1].AmOfSets, DataBase[1].Price, DataBase[1].TypeOfPack, DataBase[1].Address);
}
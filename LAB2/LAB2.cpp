#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main(int argc, char* argv[])
{
	int R, C, S;
	int pi = 3.14;
	puts("Input Radius ");
	cin >> R;
	C = 2 * pi * R;
	S = pi * R ^ R;
	cout << "Circuit = " << C << "\nSquare = " << S << "\n";
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main(int argc, char* argv[])
{
	char name[20];
	int number;
	puts("(c) Synenkiy Artem, grupa KNMS-11");
	puts("programa doslidzhennja funkcij vvodu/vuvodu");
	puts("vvedit svoje imja ta nomer kompjutera");
	cin >> name;
	scanf("%i", &number);
	printf("\nDobrogo dnya %s\nVas vitaje kompjuter %d\n", name, number);
	system("PAUSE");
	return 0;
}

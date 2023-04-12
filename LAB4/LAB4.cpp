#include <iostream>
using namespace std;

int main()
{
	int val;
	float fdisc = 0.05, sdisc = 0.07;
	cout << "Input value of product ";
	cin >> val;
	if (val > 50 && val < 100)
	{
		cout << "Pay with discount = " << val - (val * fdisc) << " uah";
	}
	else if (val > 100)
	{
		cout << "Pay with discount = " << val - (val * sdisc) << " uah";
	}
	else
	{
		cout << "Pay = " << val << " uah";
	}
}

﻿//12번
#include <iostream>
using namespace std; 

int main()
{
	int a;
	int b;
	int c;

	cin >> a >> b >> c; 

	if (a + b + c >= a * b * c)
	{
		cout << "행운의 수";
	}

	else
	{
		cout << "소소한 수"; 
	}
}
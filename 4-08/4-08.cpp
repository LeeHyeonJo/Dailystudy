﻿//8번
#include <iostream>
using namespace std; 

int main()
{
	int num; 
	cin >> num; 

	if (num > 5)
	{
		for (int i = 1; i < 11; i++)
		{
			cout << i << endl; 
		}
	}

	else
	{
		for (int i = 5; i >= 1; i--)
		{
			cout << i << endl; 
		}
	}
}
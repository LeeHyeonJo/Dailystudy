﻿// 14번
#include <iostream>
using namespace std; 

int main()
{
	int num = 0; 

	cin >> num;

	for (int i = num; i >= 0; i--) 
	{
		cout << i << endl;

		if (i == 0)
		{
			cout << "발사!"; 
		}
	}
}
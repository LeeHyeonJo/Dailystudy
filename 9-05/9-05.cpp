﻿#include <iostream>
using namespace std;

struct ABC
{
	int x;
	int y;
};

int main()
{
	ABC t;

	cin >> t.x >> t.y;
	cout << t.x + t.y; 
}
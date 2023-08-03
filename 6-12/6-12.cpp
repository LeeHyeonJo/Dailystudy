#include <iostream>
using namespace std;

char flag = 0;
char a = 0;
char b = 0;
char c = 0;

void input()
{
	cin >> a >> b >> c;
}

void process()
{
	if (a == 'A' && b == 'B' && c == 'C')
	{
		flag = 1; 
	}
}

void output()
{
	if (flag == 1)
	{
		cout << "abc를 찾았다냥"; 
	}

	else
	{
		cout << "못찾았다냥"; 
	}
}


int main()
{
	input();
	process();
	output(); 
}
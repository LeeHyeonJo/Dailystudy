#include <iostream>
using namespace std;

int num; 
int num1;

void input()
{
	cin >> num >> num1; 
}

void output()
{
	int i = 5;
	while (i <= num + num1)
	{
		cout << i++ << ' '; 
	}
}

int main()
{
	input();
	output(); 
}
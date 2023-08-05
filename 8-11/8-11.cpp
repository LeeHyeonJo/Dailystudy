#include <iostream>
using namespace std;

void star()
{
	// 1~20사이의 홀수를 출력함 
	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << ' '; 
		}
	}
}

void doll()
{
	for (char i = 'H'; i >= 'A'; i--)
	{
		cout << i << ' '; 
	}
}

void copy()
{
	for (int i = -5; i <= 5; i++)
	{
		cout << i << ' '; 
	}
}

int main()
{
	int num;
	cin >> num; 

	if (3500 <= num && num <= 5000)
	{
		star(); 
	}

	else if (2500 <= num && num < 3500)
	{
		doll(); 
	}

	else
	{
		copy(); 
	}
}

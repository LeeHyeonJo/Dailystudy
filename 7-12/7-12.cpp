#include <iostream>
using namespace std;

void wow(int _num)
{
	if (0 < _num && _num < 5)
	{
		cout << "초기값"; 
	}

	else if (6 < _num && _num < 10)
	{
		cout << "중간값";
	}

	else
	{
		cout << "알 수 없는 값"; 
	}
}; 

int main()
{
	int num; 
	cin >> num; 

	if (num == 3 || num == 5 || num == 7)
	{
		for (int i = 1; i <= 10; i++)
		{
			cout << i << ' '; 
		}
	}

	else if (num == 0 || num == 8)
	{
		for (int i = 10; i >= 1; i--)
		{
			cout << i << ' ';
		}
	}

	else
	{
		wow(num);  
	}
}
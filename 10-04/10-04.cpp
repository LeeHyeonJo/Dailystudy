#include <iostream>
using namespace std;

void printdata(int value)
{
	cout << value<<endl;
}

void even(int value)
{
	printdata(value * 2); 
}

void odd(int value)
{
	printdata(value - 10); 
}

int main()
{
	int a;
	int b;
	cin >> a >> b;

	switch ((a / b)%2)
	{
		case 0:
		{
			// 짝수일때 
			even(a/b); 
			break; 
		}

		default:
		{
			// 홀수일때 
			odd(a/b);
		}
	}

	printdata(a+b); 
}
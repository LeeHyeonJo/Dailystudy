#include <iostream>
using namespace std;

void qtr()
{
	cout << "큐티큐티큐티"; 
}

void gg()
{
	cout << "너굴적으로문제없음"; 
}

int main()
{
	int arr[3] = {}; 
	int sum = 0; 

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
		sum += arr[i]; 
	}

	if (sum >= 10)
	{
		qtr();
		cout << sum; 
	}

	else
	{
		gg(); 
		cout << sum; 
	}
}
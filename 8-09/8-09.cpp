#include <iostream>
using namespace std;

int arr[2][3] =
{
	1,2,3,
	4,5,6
};

void input()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x]; 
		}
	}
}

int process()
{
	int sum = 0; 
	
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			sum += arr[y][x]; 
		}
	}

	return sum; 
}

void output(int num)
{
	cout << num; 
}

int main()
{
	input();
	int result = process();
	output(result); 
}
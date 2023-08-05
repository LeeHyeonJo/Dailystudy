#include <iostream>
using namespace std;

int arr[3][4] =
{
	4,3,1,1,
	3,1,2,1,
	0,0,1,2
}; 

int main()
{
	int num; 
	cin >> num;

	int sum = 0; 

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			// num이 몇 개 존재하는지 세기 
			if (arr[y][x] == num)
			{
				sum++; 
			}
		}
	}

	cout << sum << "개 있어용"; 
}
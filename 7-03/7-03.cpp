#include <iostream>
using namespace std;

int arr[2][3] =
{
	3, 1, 1,
	2, 3, 2
}; 

int main()
{
	// 2중 for문으로 출력 
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << arr[y][x] << ' '; 
		}

		cout << endl; 
	}
}
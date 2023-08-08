#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] = {}; 

	int num;
	cin >> num; 

	switch (num % 2) // 짝 홀 둘중 하나겠죠 
	{

		case 0:
		{ 
			// 짝수 
			int a = 1;
			for (int i = 0; i < 4; i++)
			{
				arr[i][i] = a++; 
				// 00 11 22 33
			}
			break; 
		}

		default:
		{
			// 홀수겠지
			int b = 1; 
			for (int i = 0; i < 4; i++)
			{
				// 03 12 21 30
				// 어쩌구 = 3-i; 
				int right = 3 - i; 
				arr[i][right] = b++; 
			}
		}

	}

	// 출력
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << ' '; 
		}
		cout << endl; 
	}
}
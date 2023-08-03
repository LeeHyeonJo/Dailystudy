#include <iostream>
using namespace std;

int arr[3][3] =
{
	3,4,1,
	2,1,4,
	3,3,0
}; 

int num1 = 0; 
int num2 = 0; 

int main()
{
	// 돌면서 홀짝 카운트 
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] % 2 == 0)
			{
				// 짝수
				num1++; 
			}

			else
			{
				// 홀수
				num2++; 
			}
		}
	}

	cout << "짝수: " << num1 << endl << "홀수: " << num2; 
}
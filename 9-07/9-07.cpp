#include <iostream>
using namespace std;

int arr[6][2] = {}; 
int counting = 0; 

int main()
{
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> arr[y][x]; 
		}
	}

	// 좌 우 비교해서 큰 쪽이 왼쪽
	// 오른쪽이 클때만 스왑하고 카운팅 

	for (int i = 0; i < 6; i++)
	{
		if (arr[i][0] < arr[i][1])
		{
			int temp = 0;
			temp = arr[i][0];
			arr[i][0] = arr[i][1];
			arr[i][1] = temp; 
			counting++;  
		}
	}

	// 출력, 스왑까지 출력 
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cout << arr[y][x]<<' ';
		}
		cout << endl; 
	}

	cout << "자리를 바꾼 사람은 " << counting << "명이에용"; 
}
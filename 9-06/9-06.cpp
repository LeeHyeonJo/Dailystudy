#include <iostream>
using namespace std;

int main()
{
	char arr[3][3] = {}; 
	char text = 'A';

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			arr[y][x] = text++; // 되나?? 
		}
	}

	int y1;
	int y2;
	int x1;
	int x2;

	cin >> y1 >> x1 >> y2 >> x2; 

	// swap 두 좌표 
	char temp = 0; 
	temp = arr[y1][x1];
	arr[y1][x1] = arr[y2][x2];
	arr[y2][x2] = temp; 

	// 출력
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout<< arr[y][x]<<' ';
		}
		cout << endl; 
	}
}
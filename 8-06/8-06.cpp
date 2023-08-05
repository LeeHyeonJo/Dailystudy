#include <iostream>
using namespace std;

int arr[3][4] = {}; 

void input()
{
	int num; 
	cin >> num; 

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = num++; // num부터 시작하므로 후위~ 
		}
	}
}

void process()
{
	// 배열에 전부 1씩 더해주세용? 
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x]++; // arr[y][x] = arr[y][x] + 1의 축약 
		}
	}
}

void output()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << ' ';
		}
		cout << endl; 
	}
}

int main()
{
	input();
	process();
	output();
}
#include <iostream>
using namespace std;

char arr[4][4] = {}; 

void input(char _num) 
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = _num; 
		}
	}
}

void output()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x]; 
		}
		cout << endl; 
	}
}

int main()
{
	char num; 
	cin >> num; 

	input(num); 
	output(); 
}
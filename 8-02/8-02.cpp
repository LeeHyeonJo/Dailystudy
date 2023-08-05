#include <iostream>
using namespace std;

int arr[6] = {}; 

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i]; 
	}

	int i = 0; 
	while (arr[i] != 7) // 7이 아닐때까지 출력~ 
	{
		cout << arr[i]<<' ';
		i++; 
	}
}

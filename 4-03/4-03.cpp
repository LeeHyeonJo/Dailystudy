//3번
#include <iostream>
using namespace std; 

int arr[7] = {}; 

int main()
{
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i]; 
	}

	cout << arr[0] + arr[6]; 
}
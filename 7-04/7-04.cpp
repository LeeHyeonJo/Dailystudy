#include <iostream>
using namespace std;

int arr[5] = {}; 
int num = 0; 

int main()
{
	for ( int i = 0; i < 5; i++ ) 
	{
		cin >> arr[i]; 
	}

	// 3~7 사이 
	for ( int i = 0; i < 5; i++ )
	{
		if ( 3 <= arr[i] && arr[i] << 7 )
		{
			num++; 
		}
	}

	cout << num; 
}
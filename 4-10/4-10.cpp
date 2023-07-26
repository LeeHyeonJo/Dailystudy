// 10번
#include <iostream>
using namespace std; 

int main()
{
	int arr[6] = {}; 
	int num; 
	cin >> num; 

	for (int i = 0; i < 6; i++)
	{
		arr[i] = num--;  
	}

	cout << arr[2]; 
}
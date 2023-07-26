//4번

#include <iostream>
using namespace std;

int main()
{
	int num; 
	cin >> num; 

	int arr[5] = {}; 

	for (int i = 0; i < 5; i++)
	{
		arr[i] = num + 5; 
		cout << arr[i] << ' '; 
	}
}
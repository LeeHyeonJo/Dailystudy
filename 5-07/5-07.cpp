#include <iostream>
using namespace std;

int main()
{
	int arr[6] = {}; 

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i]; 
	}

	int num;
	cin >> num; 

	for (int i = 3; i < 6; i++)
	{
		arr[i] = num++;  // 7에서 종료 
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' '; 
	}
}
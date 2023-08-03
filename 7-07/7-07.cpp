#include <iostream>
using namespace std;

int main()
{
	int arr[3] = {};
	int max1 = -1234;
	int min1 = 9999;

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i]; 
	}

	for (int i = 0; i < 3; i++)
	{
		// 여기서부터는 비교~ 
		if (max1 < arr[i])
		{
			max1 = arr[i]; 
		}

		if (min1 > arr[i])
		{
			min1 = arr[i]; 
		}
	}

	cout << "맥스: " << max1 << endl << "최소: " << min1; 
}
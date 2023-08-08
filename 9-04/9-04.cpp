#include <iostream>
using namespace std;

int arr[6] = { 3,4,2,5,7,9 };

int main()
{
	int a;
	int b;
	cin >> a >> b;

	int change = 0; 

	change = arr[a]; // a값 저장 
	arr[a] = arr[b];
	arr[b] = change; 

	int i = 0;

	while (i < 6)
	{
		cout << arr[i];
		i++; 
	}
}
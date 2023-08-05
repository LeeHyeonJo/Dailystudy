#include <iostream>
using namespace std;

int main()
{
	int arr[6] = {3,4,1,6,7,5};

	int i = 0;
	while (i < 6) // 여기가 트루일때 무한반복이니까
	{
		cout << arr[i++] << ' '; 
	}
}
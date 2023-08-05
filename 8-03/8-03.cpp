#include <iostream>
using namespace std;

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i]; 
	}

	// while 문으로 숫자 7이 나올때까지 출력
	int i = 5; 
	while (arr[i] != 7) 
	{
		cout << arr[i] << ' '; 
		i--; 
	}
	cout << arr[i]; // 7인거 출력 

}
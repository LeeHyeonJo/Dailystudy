#include <iostream>
using namespace std;

int main()
{
	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 }; 

	int num; 
	cin >> num; 

	// 입력받은 숫자만큼 배열을 건너뛰어서 값을 출력 
	
	for (int i = 0; i < 11; i += num)
	{
		cout << arr[i] << ' '; 
	}
}
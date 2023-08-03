#include <iostream>
using namespace std;

int main()
{
	char arr[4] = {}; 
	
	cin >> arr; 

	// 아스키 번호 출력하기 

	for (int i = 0; i < 3; i++)
	{
		cout << int(arr[i]) << endl; 
	}
}
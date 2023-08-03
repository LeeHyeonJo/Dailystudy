#include <iostream>
using namespace std;

void printwow(int* _arr) // 인수로 들어오는 건 arr배열의 주소 
{
	// 그냥 함수처럼 쓰면 됨 
	for (int i = 0; i < 6; i++)
	{
		cout << _arr[i] << endl; 
	}
}

int main()
{
	int num;
	cin >> num; 

	int arr[6] = {}; 
	
	for (int i = 0; i < 6; i++)
	{
		arr[i] = num++; // 후위이므로 입력한 값부터 들어감. 
	}

	printwow(arr); // 배열의 주소가 넘어감~
}
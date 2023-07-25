//14번
#include <iostream>
using namespace std; 

int main()
{
	int a = 8; 
	// cout << a++; // 후위계산 (나중에 계산하므로 8 그대로) 
	// cout << ++a; // 전위계산 (바로 계산하므로 9) 

	for (int i = 1; i <= 4; i++)
	{
		// 4번 반복, 전위로 
		++a; 
	}

	cout << a; 
}
//10

#include <iostream>
using namespace std; 

int main()
{
	int input = 0; 
	cin >> input; 

	if (input > 3)
	{
		input++; // 후위연산자로 계산 
		cout << input; 
	}

	else
	{
		cout << --input; // 전위연산자로 계산 
	}
}
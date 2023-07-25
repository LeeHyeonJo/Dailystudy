//2번
#include <iostream>
using namespace std; 

int main()
{
	int a;
	int b;

	cin >> a >> b; 

	if (a > b)
	{
		cout << "큰 수는 " << a; 
	}

	else if (a < b)
	{
		cout << "큰 수는 " << b;
	}

	else // 같은 경우의 수 
	{
		cout << "같은 숫자"; 
	}
}
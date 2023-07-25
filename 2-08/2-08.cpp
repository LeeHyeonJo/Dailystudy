//8번
#include <iostream>
using namespace std; 

int main()
{
	int a; 
	int b;

	cin >> a >> b; 

	if (a > b)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << a; 
		}
	}

	// 어차피 조건에 따라서 위, 아래 둘 중 하나로 들어가므로 i가 겹칠 걱정은 안해도 됨 

	else
	{
		for (int i = 0; i < 4; i++)
		{
			cout << b; 
		}
	}
}
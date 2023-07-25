// 13번
#include <iostream>
using namespace std; 

int main()
{
	int a;
	int b;
	int c;

	cin >> a >> b >> c;

	if (a + b + c > 10)
	{
		cout << a * b * c; 
	}
	
	else
	{
		cout << "0";
	}
}
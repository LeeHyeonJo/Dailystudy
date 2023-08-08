#include <iostream>
using namespace std;

void geta()
{
	char a; 
	char b;
	cin >> a >> b; 

	// 아스키코드가 더 큰 값을 리턴합니다~ 

	if ((int)a > (int)b)
	{
		cout << a << ' ' << "이놈의 아스키 값은 " << (int)a; 
	}

	else
	{
		cout << b << ' ' << "이놈의 아스키값은 " << (int)b; 
	}
}

int main()
{
	geta();
}
//4번
#include <iostream>
using namespace std; 

int main()
{
	int x;
	int y; 

	cin >> x >> y; 

	if (x == 7 && y == 9) // if 문으로만 작성하면 이쪽이 참이어도, 다른 if문을 참고함 
	{
		cout << "인증됨"; 
	}

	else
	{
		cout << "재시도"; 
	}
}
//6번

#include <iostream>
using namespace std; 

int main()
{
	int x; 
	int y; 

	cin >> x >> y; 
	
	if (x >= y) // x가 크거나 둘이 같으면 
	{
		cout << "다시 숫자를 입력하세요" << endl; 

		while (true) // 무한반복 
		{
			cin >> x >> y; // 재입력한다.

			if (x >= y)
			{
				cout << "다시 숫자를 입력하세요" << endl; 
			}
			
			else if (y > x) // y가 x보다 크면 종료 
			{
				break; 
			}
		}
	}

	for (int i = x; i <= y; i++)
	{
		cout << i << endl; 
	}
}
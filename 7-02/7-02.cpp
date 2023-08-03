#include <iostream>
using namespace std;

int main()
{
	int x;
	int y; 

	cin >> x >> y; 

	if (x > y)
	{
		if ((x - y) % 2 == 0)
		{
			cout << "첫번째 수가 크고, 차이는 짝수입니당"; 
		}

		else
		{
			cout << "첫번째 수가 크고, 차이는 홀수입니당";
		}
	}

	else if (x < y)
	{
		if ((y - x) % 2 == 0)
		{
			cout << "두번째 수가 크고, 차이는 짝수입니당";
		}

		else
		{
			cout << "두번째 수가 크고, 차이는 홀수입니당";
		}
	}
}
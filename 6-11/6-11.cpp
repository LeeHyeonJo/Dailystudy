#include <iostream>
using namespace std;

int main()
{
	char test;
	char test1; 

	cin >> test >> test1;

	for (int i = 0; i < 4; i++)
	{
		for (char i = test; i <= test1; i++)
		{
			cout << (char)i << ' '; // 딱히 형변환 안해도 ok 
		}
		cout << endl; 
	}
}
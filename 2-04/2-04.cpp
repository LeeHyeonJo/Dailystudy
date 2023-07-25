//4번
#include <iostream>
using namespace std; 

int main()
{
	int a;
	int b;
	int c;

	cin >> a >> b >> c; 

	for (int k = 0; k < 3; k++)
	{
		if (k == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << a;
			}

			cout << endl; 
		}

		if (k == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << b;
			}
			cout << endl; 
		}

		if(k == 2)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << c;
			}
		}

	}
}
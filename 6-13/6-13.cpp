#include <iostream>
using namespace std; 

int main()
{
	int a;
	int b;
	int c;
	cin >> a >> b >> c;

	for (int i = 0; i < c; i++)
	{
		for (int i = a; i <= b; i++)
		{
			cout << i << ' '; 
		}
		cout << endl; 
	}
}
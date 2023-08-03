#include <iostream>
using namespace std;

int main()
{
	int num; 
	cin >> num;

	for (int y = 0; y < num; y++)
	{
		for (int x = 1; x <= 5; x++)
		{
			cout << x << ' '; 
		}
		cout << endl; 
	}
}
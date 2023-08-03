#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num; 

	for (int y = 0; y < num; y++)
	{
		for (int x = 0; x < num; x++)
		{
			cout << "#";
		}
		cout << endl; 
	}
}
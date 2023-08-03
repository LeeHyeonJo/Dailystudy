#include <iostream>
using namespace std;

int main()
{
	char arr[5] = "BTKA"; 
	int num;
	cin >> num; 

	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			cout << arr[k] << ' '; 
		}
		cout << endl; 
	}
}
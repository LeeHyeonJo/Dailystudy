#include <iostream>
using namespace std;

int main()
{
	char arr[7] = "$@DA9#";
	
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << ':' << int(arr[i]) << endl; 
	}
}
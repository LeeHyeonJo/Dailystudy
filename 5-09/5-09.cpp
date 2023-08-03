#include <iostream>
using namespace std;

char arr[4] = "ABC"; 

void kk()
{
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i]; 
	}

	cout << endl; 
}

int main()
{
	int num; 
	cin >> num; 

	for (int i = 0; i < num; i++)
	{
		kk(); 
	}
}
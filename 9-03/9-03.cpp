#include <iostream>
using namespace std;

char arr[7] = "AFGABC";

int main()
{
	char a; 
	char b;
	cin >> a >> b; 

	int count1 = 0;
	int count2 = 0;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == a)
		{
			count1 = 1; 
		}

		if (arr[i] == b)
		{
			count2 = 1; 
		}

	}

	if (count1 == 1 && count2 == 1)
	{
		cout << "와 2개"; 
	}

	else if (count1 == 0 && count2 == 0)
	{
		cout << "우 0개"; 
	}

	else
	{
		cout << "오 1개"; 
	}

}
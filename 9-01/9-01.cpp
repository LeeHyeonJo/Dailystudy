#include <iostream>
using namespace std; 

int arr[8] = {4,3,6,1,3,1,5,3}; 

int main()
{
	int num;
	int counting = 0; 
	cin >> num;

	int i = 0; 
	while (i < 8)
	{
		if (arr[i] == num)
		{
			counting++; 
		}
		i++; 
	}

	cout << "숫자" << num << "은 " << counting; 
}
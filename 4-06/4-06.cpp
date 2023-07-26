//6번
#include <iostream>
using namespace std; 

int main()
{
	int arr[4] = { 3,1,2,5 }; 
	int num = 0; 

	cin >> num; 

	if ( arr[num] > 2 )
	{
		cout << "우와"; 
	}

	else
	{
		cout << "우엥"; 
	}
}
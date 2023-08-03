#include <iostream>
using namespace std;

int main()
{
	int num; 
	cin >> num;

	if (num >= 80)
	{
		cout << "수"; 
	}

	else if (num >= 70 && num < 80)
	{
		cout << "우"; 
	}

	else if (num >= 60 && num < 70)
	{
		cout << "미"; 
	}

	else
	{
		cout << "재시도"; 
	}
}
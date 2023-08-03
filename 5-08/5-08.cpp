#include <iostream>
using namespace std;

int ken() // 들어오는 인자는 없는 대신 
{
	int num; 
	cin >> num; 

	return num; // num 을 리턴합니당 
}

void bb(int _num) // 인자로 들어온 값을 기준으로 판단해용 
{
	if (_num > 5)
	{
		cout << "5보다 커용";
	}

	else
	{
		cout << "5보다 작거나 같아용"; 
	}
}

int main()
{
	bb(ken()); // 이게 되나?  되네용. 
}
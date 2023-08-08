#include <iostream>
using namespace std;

void dd(int _a, int _b)
{
	cout << "합 " << _a + _b << endl;
	cout << "차 " << _a - _b << endl; 
	cout << "곱 " << _a * _b << endl; 
	cout << "몫 " << _a / _b << endl; 
}

int main()
{
	int a;
	int b;
	cin >> a >> b; 

	dd(a, b);
}
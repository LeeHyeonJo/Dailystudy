#include <iostream>
using namespace std;

int main()
{
	char text;
	cin >> text;

	if ('a' <= text && text <= 'z')
	{
		cout << "소문자입니다";
	}

	else if ('A' <= text && text <= 'Z')
	{
		cout << "대문자입니다"; 
	}
}
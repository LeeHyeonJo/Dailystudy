#include <iostream>
using namespace std;

void checkCH(char text)
{
	// 한 글자씩 대소문자 구분 
	// 케이스가 하나씩인 경우에만 스위치문이 적합함
	if ('a' <= text  && text <= 'z')
	{
		cout << "소~"<<' ';
	}

	else
	{
		cout << "대~"<<' ';
	}
}

int main()
{
	char arr[6] = {}; 
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i]; 
	}

	for (int i = 0; i < 5; i++)
	{
		checkCH(arr[i]);
	}
}
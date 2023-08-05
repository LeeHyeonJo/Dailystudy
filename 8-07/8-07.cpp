#include <iostream>
using namespace std;

char arr1[6] = "BD5QA";
char arr2[1][5] =
{
	'Q',
	'E',
	'R',
	'E',
	'F'
};

char input()
{
	char text;
	cin >> text; 

	return text; 
}

void output(char _text) 
{
	if ('a' <= _text && _text <= 'z')  
	{
		cout << arr1; // char이니까 됨 ㅅㄱ
	}

	else if ('A' <= _text && _text <= 'Z') 
	{
		for (int i = 0; i < 5; i++)
		{
			cout << arr2[0][i] << endl; 
		}
	}

	else // 숫자일때 
	{
		for (char i = 'H'; i >= 'A'; i--)
		{
			cout << i; 
		}
	}

}

int main()
{
	char result = input();
	output(result); 
}
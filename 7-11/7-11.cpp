#include <iostream>
using namespace std;

int arr[3][3] = {}; 

int input()
{
	int num; 
	cin >> num; 

	return num; 
}

void process(int _num)
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			arr[y][x] = _num++;
			// 입력한 _num 부터 들어가므로 후위연산자 
		}
	}
}

void output()
{
	// 배열 출력 
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << arr[y][x]<<' ';
		}
		cout << endl; 
	}
}

int main()
{
	int result = input(); // num을 리턴 
	process(result); 
	output(); 
}
#include <iostream>
using namespace std;

char arr[2][4] =
{
	"FEW",
	"DCA"
};

void findch(char _text)
{
	// 전달받은 문자가 전역 배열에 존재하는지 체크
	// 그 후 존재여부를 출력해주세요 
	int counting = 0; 

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == _text)
			{
				counting++; 
			}
		}
	}

	switch (counting)
	{
		case 0:
		{
			cout << "미발견";
			break; 
		}

		default:
		{
			cout << "발견"; 
		}

	}
}

int main()
{
	char text; 
	cin >> text; 

	findch(text);
}
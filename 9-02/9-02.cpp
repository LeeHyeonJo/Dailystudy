#include <iostream>
using namespace std;

char arr[3][6] =
{
	"ABCDE",
	"EABAB",
	"ACDER"
};

int main()
{
	char num; 
	cin >> num;

	int counting = 0; 

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (arr[y][x] == num)
			{
				counting++; 
			}
		}
	}

	switch (counting) // if-else 문 대신 switch 문으로 대체 
	{
		case 0:
		{
			cout << "미발견";
			break;
		}

		case 1:
		{
			cout << "발견"; 
			break; 
		}

		case 2:
		{
			cout << "발견";
			break; 
		}

		default: // 그 외의 상황. 3개 이상 
		{
			cout << "대발견"; 
			break; 
		}

	}

}


#include <iostream>
using namespace std;

int main()
{
	int arr[4] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i]; 
	}

	// 4번 반복하게 
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] < 20)
		{
			cout << "더 큰 수를 입력하세요" << endl; 
		}

		else if (arr[i] > 20) 
		{
			cout << "더 작은 수를 입력하세요" << endl;
		}

		else
		{
			cout << "정답~" << endl;
		}
	}
}
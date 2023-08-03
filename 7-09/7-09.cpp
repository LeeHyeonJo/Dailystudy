#include <iostream>
using namespace std;

int main()
{
	int arr[5] = {}; 

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= 70)
		{
			cout << i+1 << "번 사람은 " << arr[i] << "점 PASS"<<endl; 
		}

		else if (arr[i] < 70 && arr[i] >= 50)
		{
			cout << i + 1 << "번 사람은 " << arr[i] << "점 RESTART" << endl;
		}

		else if (arr[i]<50)
		{
			cout << i + 1 << "번 사람은 " << arr[i] << "점 FAIL" << endl;
		}
	}

}
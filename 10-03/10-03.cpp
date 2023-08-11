#include <iostream>
using namespace std;

int arr[3][3] = {}; 
int a = 10; 
int b = 1; 

void wow(int _num)
{

	switch (_num % 5)
	{

		case 1:
		{

			for (int y = 2; y >= 0; y--)
			{
				for (int x = 2; x >= 0; x--)
				{
					arr[x][y] = b++; 
				}
			}

			break;
		}
		
		case 2:
		{
			for (int y = 2; y >= 0; y--)
			{
				for (int x = 0; x < 3; x++)
				{
					arr[y][x] = b++;
				}
			}

			break;
		}

		default:
		{
			for (int y = 0; y < 3; y++)
			{
				for (int x = 0; x < 3; x++)
				{
					arr[x][y] = a++;
				}
			}
		}

	}
}

void printing()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << arr[y][x] << ' ';
		}
		cout << endl; 
	}
}

int main()
{
	int num;
	cin >> num;

	wow(num); 
	printing(); 
}
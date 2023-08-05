#include <iostream>
using namespace std;

int main()
{
	char arr[7] = "#_#_##";

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == '#')
		{
			cout << "샵"; 
		}

		else if (arr[i] == '_')
		{
			cout << "우";
		}
	}
}
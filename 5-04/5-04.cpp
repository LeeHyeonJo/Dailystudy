#include <iostream>
using namespace std;

void wow()
{
	cout << "와우 판타스틱 베이비"; 
}

void ken()
{
	cout << "저는 켄이에용"; 
}

int main()
{
	int num; 
	cin >> num; 

	if (num == 1)
	{
		wow(); 
	}

	// 위 조건이 틀리면 여길 체크. 여기도 if 라면, 위 조건의 참 거짓에 상관없이 여기도 체크함. 
	else if (num == 2)
	{
		ken(); 
	}
}
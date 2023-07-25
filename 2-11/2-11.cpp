//if - else if 문 차이는 이걸로 이해했다. 
#include <iostream>
using namespace std; 

int main()
{
	int num; 
	cin >> num; 

	if (num > 0) // if 
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "###" << endl; 
		}
	}

	if (num > 0) // else if : 위의 if가 참일경우, else if는 체크하지 않음 
				// 둘 다 if문이라면: 참, 거짓에 관계없이 두 문장 모두 체크함. 
				// 이걸 실행해보면 체크할 수 있음. (else if면 ###만 출력)
												// (if면 ###와 $$$다 출력) 
	{
		for (int i = 0; i < 2; i++)
		{
			cout << "$$$" << endl; 
		}
	}

	// num이 0이면 아무것도 하지 않는다. 
}
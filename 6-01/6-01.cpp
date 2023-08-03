#include <iostream>
using namespace std; 

char arr[3] = {}; 

void asdf()
{
	cin >> arr; // 문자형 배열은 이게 됨 
}

void put()
{
	cout << arr; // 이거 안되나?/요?? 
}

int main()
{
	// char는 1바이트 문자를 저장하는 자료형. only 한 글자만~ 
	asdf(); 
	put(); 
}
#include <iostream>
using namespace std;

struct Person
{
	int age;
	int height;

	// 멤버 이니셜라이저는 생성자에서~!
	Person()
		: age(10), height(10)
	{
		// 생성자에서 초기화하는거였음 이제 기억남 ㅋㅋ 
	}
}; 

void output(int ageA, int heightA, int ageB, int heightB)
{
	// 얕은복사가 안되도록...나중에 얕-깊 복사 찾아보기 
	// a, b 각각 나이와 키의 평균을 구해서 출력하기 

	int final_age = (ageA + ageB) / 2;
	int final_height = (heightA + heightB) / 2;

	cout << "두 사람의 평균 나이는 " << final_age << endl << "두 사람의 평균 키는 " << final_height;
}


void input(Person _a, Person _b)
{
	cin >> _a.age >> _a.height >> _b.age >> _b.height; 
	// 입력받았음~ 그리고 아웃풋 호출해서 넣어주면 될듯 

	output(_a.age,_a.height,_b.age,_b.height); 
	// 아웃풋이 위에서 선언되어있어야 돌아감. 
}


int main()
{
	Person a; // 구조체 변수 1
	Person b; // 구조체 변수 2

	input(a, b);  
}
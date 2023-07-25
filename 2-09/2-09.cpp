//9번

#include <iostream>
using namespace std; 

int main()
{
	int num;
	cin >> num;

	cout << num << " 은 입력한 num 값입니다." << endl; 
	cout << "num++을 수행하면 " << num++ << "이 됩니다." << endl;
	cout << "값이 변하지 않죠? num++은 후위 연선자이기 때문입니다." << endl;
	cout << "그러나 두번째 줄에서 num++형태로 선언했으므로, num을 다시 출력해보면 num의 값은 이젠 바뀌어서 나옵니다. 한번 해볼까요~" << endl;
	cout << num << " 은 num++이 적용된, num값입니다."; 
}
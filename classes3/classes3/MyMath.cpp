#include <iostream>
using namespace std;
/*
   static이 있는 멤버함수 정의
*/
class MyMath {
public:
	//절대값 계산
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}
};

int main()
{
	/*MyMath math1; //인스턴스형 클래스
	cout << "절대값: " << math1.abs(-6) << endl;*/

	//static이 있는 멤버함수는 클래스 이름으로 직접 접근함
	cout << "절대값: " << MyMath::abs(-6) << endl; //6

	return 0;
}
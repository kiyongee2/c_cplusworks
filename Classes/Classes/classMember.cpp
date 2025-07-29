#include <iostream>
using namespace std;

//Member 클래스 정의
class Member {
private:
	string id;  //아이디
	string password; //패스워드

public:
	//생성자 - setter(외부 입력)
	Member(string id, string password) {
		this->id = id;
		this->password = password;
	}

	//getter(접근자)
	string getId();
	string getPassword();
};

string Member::getId() {
	return id;
}

string Member::getPassword() {
	return password;
}

int main()
{
	//배열로 인스턴스 생성
	const int SIZE = 3;

	Member memberList[SIZE] = {
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234")
	};

	//특정 회원 검색
	/*cout << "아이디: " << memberList[0].getId() << endl;
	cout << "패스워드: " << memberList[0].getPassword() << endl;*/

	cout << "********** 회원 현황 **********" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "아이디: " << memberList[i].getId() <<
			", 패스워드: " << memberList[i].getPassword() << endl;
	}

	return 0;
}
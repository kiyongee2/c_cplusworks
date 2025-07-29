#include <iostream>
using namespace std;

//Member Ŭ���� ����
class Member {
private:
	string id;  //���̵�
	string password; //�н�����

public:
	//������ - setter(�ܺ� �Է�)
	Member(string id, string password) {
		this->id = id;
		this->password = password;
	}

	//getter(������)
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
	//�迭�� �ν��Ͻ� ����
	const int SIZE = 3;

	Member memberList[SIZE] = {
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234")
	};

	//Ư�� ȸ�� �˻�
	/*cout << "���̵�: " << memberList[0].getId() << endl;
	cout << "�н�����: " << memberList[0].getPassword() << endl;*/

	cout << "********** ȸ�� ��Ȳ **********" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "���̵�: " << memberList[i].getId() <<
			", �н�����: " << memberList[i].getPassword() << endl;
	}

	return 0;
}
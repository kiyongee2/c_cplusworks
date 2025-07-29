#include <iostream>
using namespace std;

class Dog {
private: //�ܺ� Ŭ�������� ������ �� ����
	string type;
	int age;

public: //�ܺ� Ŭ�������� ���� ������
	Dog() {}  //�⺻ ������

	//������(setter) - set+�������()
	void setType(string _type) {
		type = _type;
	}

	void setAge(int _age) {
		age = _age;
	}

	//������(getter) - get+�������()
	string getType() {
		return type; //Ŭ���� ���ο����� ���� ����
	}
	int getAge() {
		return age;
	}

};

int main()
{
	Dog dog;
	//dog.type;  //private �̹Ƿ� ���� �Ұ�

	dog.setType("������");
	dog.setAge(3);

	cout << "������ ����: " << dog.getType() << endl;
	cout << "������ ����: " << dog.getAge() << endl;

	return 0;
}
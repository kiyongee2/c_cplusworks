#include <iostream>
using namespace std;
/*
   Ŭ����(class)
   - �繰(��ü)�� �߻�ȭ�� �ڷ����̴�.
   - �繰�� �Ӽ�(�������)�� ���(����Լ�)�� ������ ����.
   - Ŭ���� �̸��� ù���ڰ� �빮����
   - ĸ��ȭ�� ���� ���������ڰ� ����
	 (private: ���ٺ���, public:�������)
*/

//Dog Ŭ���� ����
class Dog {
public:
	//��� ����
	string type;  //������ ����
	int age;      //������ ����

	Dog() {}  //�⺻ ������

	//������ ���� ���
	void showInfo() {
		cout << "������ ����: " << type << endl;
		cout << "������ ����: " << age << endl;
	}

	void bark() {cout << "��~ ��~\n";}
};


int main()
{
	//Ŭ���� ��� - �ν��Ͻ��� ����
	//�ν��Ͻ��� ����� ���� - ��(.) ������ ���
	Dog dog1;  
	dog1.type = "Ǫ��"; 
	dog1.age = 2;
	dog1.showInfo();
	dog1.bark();

	Dog dog2; //�Ű������� �ִ� �����ڷ� �ν��Ͻ� ����
	dog2.type = "������";
	dog2.age = 3;
	dog2.showInfo();
	dog2.bark();

	return 0;
}
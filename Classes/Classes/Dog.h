//���Ǻ� ������ ��
#ifndef DOG_H //��� ������ �ߺ����� �ʵ��� ��
#define DOG_H //��ũ�� �̸� ����

#include <string> //string �ڷ��� ���
using namespace std;

class Dog {
private:
	string type;
	int age;

public:
	Dog(string _type, int _age);

	string getType();
	int getAge();
	void bark();
};

#endif // ���Ǻ� ������ �� ����
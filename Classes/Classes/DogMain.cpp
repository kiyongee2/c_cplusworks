#include <iostream>
#include "Dog.h"

int main()
{
	Dog dog1("��Ƽ��", 4);

	cout << "������ ����: " << dog1.getType() << endl;
	cout << "������ ����: " << dog1.getAge() << endl;

	return 0;
}
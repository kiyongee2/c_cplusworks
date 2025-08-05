#include <iostream>
#include "Drink.h"
#include "Alcohol.h"

int main()
{
	//Drink ������ ȣ��
	Drink coffee("Ŀ��", 2500, 4);
	Drink tea("����", 3000, 3);
	
	//Alcohol ������ ȣ��
	Alcohol soju("����", 3500, 2, 14.3f);

	Drink::printTitle();  //static�̹Ƿ� ����
	coffee.printData();
	tea.printData();
	soju.printData();

	//���� �ݾ��� �� �հ�
	int total = coffee.calcPrice() + tea.calcPrice() +
		soju.calcPrice();

	cout << "***** �հ� �ݾ�: " << total << "�� *****\n";

	return 0;
}
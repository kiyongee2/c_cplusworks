#include <iostream>
#include "Card.h"

//���� ������ Ŭ������ �ܺο��� �ѹ��� ������
int Card::serialNum = 1000;

//�⺻ ������ ����
Card::Card(){}

Card::Card(string name) { //������
	this->name = name;
	serialNum++;  //1 ����
	cardNumber = serialNum;
}

int Card::getCardNumber() { //�Լ� ����
	return cardNumber;
}

void Card::printInfo() {
	cout << "�� �̸�: " << name
		<< ", ī�� ��ȣ: " << cardNumber << endl;
}
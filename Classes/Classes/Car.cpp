#include <iostream>
#include "Car.h"

//������ ����
Car::Car(string model, int year) {
	this->model = model;
	this->year = year;
}

//�Լ� ����
void Car::carInfo() {
	cout << "�𵨸�: " << this->model <<
		", ����: " << this->year << endl;
}

void Car::drive() {
	cout << this->model << "�� �޸��ϴ�\n";
}
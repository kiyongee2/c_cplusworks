#include <iostream>
#include "Car.h"

int main()
{
	Car car("Ionic6", 2024);
	car.carInfo();
	car.drive();

	cout << "============================\n";

	//��ü �迭

	const int SIZE = 3;  //��� ����

	Car carList[SIZE] = {
		Car("�ҳ�Ÿ", 2020),
		Car("����Ƽ��", 2022),
		Car("EV6", 2025)
	};

	/*carList[0].carInfo();
	carList[0].drive();*/

	for (int i = 0; i < SIZE; i++) {
		carList[i].carInfo();
		carList[i].drive();
		cout << "----------------------------\n";
	}

	return 0;
}
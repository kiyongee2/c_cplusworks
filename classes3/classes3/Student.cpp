#include <iostream>
#include "Student.h"

void showInfo(Student& st) {
	cout << "�̸�: " << st.name << endl;
	cout << "�г�: " << st.grade << endl;
	cout << "�ּ�: " << st.address << endl;
	cout << "------------------------------\n";
}
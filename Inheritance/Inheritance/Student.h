#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"

using namespace std;


//Person Ŭ������ ����� Student Ŭ����
class Student : public Person{
private:
	int studentId;  //�й�

public:
	//������ - �θ� ����� ����
	Student(string name, int studentId);

	void greet();
	void displayInfo();
};
#endif // !1
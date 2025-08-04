#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"

using namespace std;


//Person 클래스를 상속한 Student 클래스
class Student : public Person{
private:
	int studentId;  //학번

public:
	//생성자 - 부모 멤버도 포함
	Student(string name, int studentId);

	void greet();
	void displayInfo();
};
#endif // !1
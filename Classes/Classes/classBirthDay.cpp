#include <iostream>
using namespace std;

class BirthDay {
private:
	int year;
	int month;
	int day;

public:
	//�Ű������� �̸��� ��������� �����ϰ� �� 
	//�Ű������� this ����� ������
	void setYear(int year) {
		this->year = year;
	}

	void printThis() {  //this�� ����ϴ� �Լ�
		cout << this << endl;
	}
};

int main()
{
	//BirthDay �ν��Ͻ� ����
	BirthDay bDay;
	bDay.setYear(2025);

	cout << &bDay << endl; //000000F7419AF7B8

	bDay.printThis();      //000000F7419AF7B8

	return 0;
}
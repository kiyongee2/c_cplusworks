#include "Students.h"

int main()
{
	//�ν��Ͻ� ����
	Students park(1001, "�ڻ���");

	//���� ����
	park.addSubject("����", 85);
	park.addSubject("�̼�", 92);
	park.addSubject("����", 80);

	//���� ���
	park.showInfo();

	return 0;
}
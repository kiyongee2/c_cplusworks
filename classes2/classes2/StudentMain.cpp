#include "Student.h"

int main()
{
	//�л� �ν��Ͻ� ����
	Student lee(1001, "������");
	Student shin(1002, "������");

	//���� ����
	lee.setKoreanSubject("����", 85);
	lee.setMathSubject("����", 80);

	shin.setKoreanSubject("����", 90);
	shin.setMathSubject("����", 85);

	//�л��� ���� ���
	lee.showInfo();
	shin.showInfo();

	return 0;
}
#include "Students.h"

int main()
{
	//인스턴스 생성
	Students park(1001, "박상희");

	//과목 설정
	park.addSubject("국어", 85);
	park.addSubject("미술", 92);
	park.addSubject("음악", 80);

	//정보 출력
	park.showInfo();

	return 0;
}
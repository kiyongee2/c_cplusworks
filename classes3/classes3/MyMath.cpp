#include <iostream>
using namespace std;
/*
   static�� �ִ� ����Լ� ����
*/
class MyMath {
public:
	//���밪 ���
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}
};

int main()
{
	/*MyMath math1; //�ν��Ͻ��� Ŭ����
	cout << "���밪: " << math1.abs(-6) << endl;*/

	//static�� �ִ� ����Լ��� Ŭ���� �̸����� ���� ������
	cout << "���밪: " << MyMath::abs(-6) << endl; //6

	return 0;
}
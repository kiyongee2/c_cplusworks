#include <iostream>
#include <stack>
using namespace std;

/*
   stack - �迭 ������ �Ǿ� �ְ�, ���� �� ��Ұ� ���߿� ������
*/

int main()
{
	//������ ������ ���� ���� ����
	stack<int> stk;

	//��� �߰� (10 - 20 - 30)
	stk.push(10);
	stk.push(20);
	stk.push(30);

	cout << stk.top() << endl; //������ �� �� ���, 30
	stk.pop();  //��� ����

	cout << stk.top() << endl; //20
	stk.pop();

	cout << stk.top() << endl; //10
	stk.pop();

	// ������ ��� �ִ� ���¿��� pop() ȣ�� ����
	if (!stk.empty()) {
		stk.pop();
	}
	else {
		cout << "������ �̹� ��� �־ pop()�� �� �����ϴ�.\n";
	}

	return 0;
}
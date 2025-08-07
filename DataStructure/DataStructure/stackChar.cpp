#include <iostream>
#include <stack>
using namespace std;

int main()
{
	//���ڸ� ������ ���� �����̳� ����
	stack<char> stk;

	//��� �߰�(a - b - c)
	stk.push('a');
	stk.push('b');
	stk.push('c');

	//��� ����(c - b - a) - ������ ���� ó��
	while (!stk.empty()) { //������ ������� ������
		cout << stk.top() << " "; //�� �� ��� ���
		stk.pop(); //��� ����
	}
	printf("\n---------------------\n");

	//���ڿ� ������
	string str; //���ڿ� ����
	cout << "���ڿ� �Է�: "; 
	cin >> str;  //ten

	stack<char> stk2;  //���ڸ� ������ ���� ����

	//���� �߰�
	for (auto ch : str) //char -> auto ���
		stk2.push(ch);

	cout << "������ ���ڿ�: ";
	while (!stk2.empty()) {
		cout << stk2.top();
		stk2.pop();
	}

	return 0;
}
#include <iostream>
#include <queue>
using namespace std;
/*
    ť(Queue) 
	- ���Լ���(FIFO) - �迭���� ���� �� �ڷḦ ���� ����
*/

int main()
{
	/*
	queue<int> que; //������ ������ ť ����

	//��� �߰�(10 - 20 - 30)
	que.push(10);
	que.push(20);
	que.push(30);

	//�˻�
	cout << "ù��° ���: " << que.front() << endl; //10
	cout << "������ ���: " << que.back() << endl; //30
	//cout << "0�� ���: " << que[0] << endl; //���� �Ұ�

	//��� ����
	/*que.pop();  //10 ����
	cout << "���� ���: " << que.front() << endl; //20

	//��ü ��� ���� �� ���
	while (!que.empty()) {
		cout << que.front() << " ";
		que.pop(); //����(10 - 20 - 30)
	}
	*/

	//���� �� ����� 
	queue<string> q;

	//�� �����(A - B - C)
	q.push("��A");
	q.push("��B");
	q.push("��C");

	while (!q.empty()) {
		cout << q.front() << "�� ���� ó����..." << endl;
		q.pop();
	}

	cout << "��� ���� ������ �Ϸ�Ǿ����ϴ�.\n";

	return 0;
}

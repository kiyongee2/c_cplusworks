#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//�������� ���ڿ��� ������ ���� ��ü ����
	vector<string> list;

	//��� ����
	list.push_back("jerry");
	list.push_back("luna");
	list.push_back("han");
	list.push_back("elsa");

	//����� ����
	cout << list.size() << endl;

	//2�� �ε��� ��� �˻�
	cout << list.at(2) << endl;

	//��ü ���
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << endl;
	}

	//�������� ���� �ڿ� ������ �̸� -> �ִ밪�� ������
	//�ܾ��� ù����(�ƽ�Ű �ڵ��� ũ��� ���� a-97, b-98)

	string name;  //�̸� ���� ����
	name = list.at(0); //0�� �ε����� �ִ밪���� ����

	for (int i = 0; i < list.size(); i++) {
		//if �� ����
		if (name < list[i])
			name = list[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;  //luna

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> cartList;

	//����
	cartList.push_back("���");
	cartList.push_back("����");
	cartList.push_back("ȭ����");
	cartList.push_back("���");

	printf("*** carts ����Ʈ ��� ***\n");
	vector<string>::iterator it;

	//����
	for (it = cartList.begin(); it != cartList.end(); it++) {
		cout << *it << " "; //������ �������� ���
	}
	printf("\n================================\n");

	//����
	//cartList[1] = "��";
	cartList.at(1) = "��";

	//����
	for (it = cartList.begin(); it != cartList.end(); it++) {
		if (*it == "ȭ����") {
			cartList.erase(it);
			break;
		}
	}

	printf("*** carts ����Ʈ ��� ***\n");
	for (auto cart : cartList)
		cout << cart << " ";

	return 0;
}
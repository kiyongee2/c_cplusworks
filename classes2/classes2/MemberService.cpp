#include <iostream>
using namespace std;

//ȸ�� ����(�α���, �α׾ƿ�) Ŭ����
class MemberService {
public:
	//�α���(���̵�� ��й�ȣ ��ġ ����) �Լ�
	bool login(string id, string pwd);  
	void logout();  //�α� �ƿ�
};

bool MemberService::login(string id, string pwd) {
	if (id.compare("hangang") == 0 && pwd.compare("k1234") == 0) {
		return true;
	}
	return false;
}

void MemberService::logout() {
	cout << "�α׾ƿ� �Ǿ����ϴ�.\n";
}

int main()
{
	//�ν��Ͻ�(��ü) ����
	MemberService service;

	string userId = "hangang";
	string password = "k1234";

	//�α���
	bool result = service.login(userId, password);
	if (result) {//result == true
		cout << "�α��� �Ǿ����ϴ�.\n";
		cout << userId << "�� ȯ���մϴ�\n";
	}
	else { //result == false
		cout << "���̵� ��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n";
	}
	cout << "-----------------------------\n";

	//�α׾ƿ�
	service.logout();

	return 0;
}
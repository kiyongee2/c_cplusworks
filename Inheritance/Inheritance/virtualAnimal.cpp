//#include <iostream>
//using namespace std;
///*
//   �߻� Ŭ����
//   - ������ �� ���� �����Լ�(�߻��Լ�)�� ������ �ִ� Ŭ����
//   - �����Լ� virtual Ű���带 ����
//   - ���� �Ҹ��ڸ� ó���ؾ� ��, �Ҹ��� �տ� virtual ����
//*/
//class Animal { //�߻� Ŭ����
//public:
//	//Animal(){}  //�⺻ ������ ����
//	virtual ~Animal(){}  //���� �Ҹ���
//
//	void breathe() {
//		cout << "���� ���ϴ�.\n";
//	}
//
//	//���� �Լ� ���� 
//	// ��ӹ��� Ŭ�������� �ݵ�� �����ؾ���(������)
//	// �Լ��ڿ� override Ű���带 ����
//	virtual void cry() = 0;
//};
//
////Animal�� ��ӹ��� Cat Ŭ����
//class Cat : public Animal {
//public:
//	void cry() override {
//		cout << "��~ ��!\n";
//	}
//
//	~Cat() override{
//		cout << "Cat �Ҹ��� ȣ���\n";
//	}
//};
//
////Animal�� ��ӹ��� Dog Ŭ����
//class Dog : public Animal {
//public:
//	void cry() override {
//		cout << "��~ ��!\n";
//	}
//
//	~Dog() override{
//		cout << "Dog �Ҹ��� ȣ���\n";
//	}
//};
//
//int main()
//{
//	//���� ��ü(�ν��Ͻ�) ����
//	//������ �θ� �ڷ������� �ν��Ͻ� ����
//	//�θ� �ڷᰡ ��Ů�ϴ�.�ڵ�����ȯ
//	Animal* cat = new Cat;
//	Animal* dog = new Dog;
//
//	//��� ����
//	cat->cry();
//	dog->cry();
//
//	delete cat;  //�޸� ����
//	delete dog;
//
//
//	/*//Cat ������ ȣ��
//	Cat cat;
//	cat.breathe();
//	cat.cry();
//	
//	//Dog ������ ȣ��
//	Dog dog;
//	dog.breathe();
//	dog.cry();*/
//
//
//	return 0;
//}
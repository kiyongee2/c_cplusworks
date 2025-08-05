#include "Cat.h"
#include "Dog.h"

int main()
{
	//동적 객체 생성(다형성 구현)
	Animal* cat = new Cat;
	Animal* dog = new Dog;

	//기능 구현
	cat->breathe();
	cat->cry();

	dog->breathe();
	dog->cry();

	delete cat;  //메모리 해제
	delete dog;

	return 0;
}
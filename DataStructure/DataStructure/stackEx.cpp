#include <iostream>
#include <stack>
using namespace std;

/*
   stack - 배열 구조로 되어 있고, 먼저 들어간 요소가 나중에 꺼내짐
*/

int main()
{
	//정수를 저장할 스택 구조 생성
	stack<int> stk;

	//요소 추가 (10 - 20 - 30)
	stk.push(10);
	stk.push(20);
	stk.push(30);

	cout << stk.top() << endl; //스택의 맨 위 요소, 30
	stk.pop();  //요소 제거

	cout << stk.top() << endl; //20
	stk.pop();

	cout << stk.top() << endl; //10
	stk.pop();

	// 스택이 비어 있는 상태에서 pop() 호출 방지
	if (!stk.empty()) {
		stk.pop();
	}
	else {
		cout << "스택이 이미 비어 있어서 pop()할 수 없습니다.\n";
	}

	return 0;
}
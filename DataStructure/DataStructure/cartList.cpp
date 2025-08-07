#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> cartList;

	//저장
	cartList.push_back("라면");
	cartList.push_back("생수");
	cartList.push_back("화장지");
	cartList.push_back("계란");

	printf("*** carts 리스트 출력 ***\n");
	vector<string>::iterator it;

	//삭제
	for (it = cartList.begin(); it != cartList.end(); it++) {
		cout << *it << " "; //포인터 역참조로 출력
	}
	printf("\n================================\n");

	//수정
	//cartList[1] = "쌀";
	cartList.at(1) = "쌀";

	//삭제
	for (it = cartList.begin(); it != cartList.end(); it++) {
		if (*it == "화장지") {
			cartList.erase(it);
			break;
		}
	}

	printf("*** carts 리스트 출력 ***\n");
	for (auto cart : cartList)
		cout << cart << " ";

	return 0;
}
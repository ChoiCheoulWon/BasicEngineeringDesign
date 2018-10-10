/*
도시락 재고 관리

두 가지 메뉴의 주문을 받고 재고, 매상을 출력해주는 프로그램
각 메뉴 1000원 1500원
주문 입력받고 남은 재고량 변화 -> void order(int*,int*)
매상 계산함수 -> int turnover(int,int)

*/

#include <iostream>

using namespace std;

void order(int*, int*);
int turnover(int, int);

int main() {

	int stock1 = 100, stock2 = 100;
	int profit;

	order(&stock1, &stock2);
	profit = turnover(stock1, stock2);

	cout << "-- 정산 --" << endl;
	cout << "치킨마요 : " << stock1 << " / 100" << endl;
	cout << "제육볶음 : " << stock2 << " / 100" << endl;

	cout << "매상 = " << profit << endl;

	return 0;

}

void order(int* stock1, int* stock2) {
	int menu1, menu2;
	cout << "각각의 주문량을 입력하세요(치킨마요,제육볶음) : "; cin >> menu1 >> menu2;
	*stock1 -= menu1; *stock2 -= menu2;
	cout << "각각의 주문량을 입력하세요(치킨마요,제육볶음) : "; cin >> menu1 >> menu2;
	*stock1 -= menu1; *stock2 -= menu2;
	cout << "각각의 주문량을 입력하세요(치킨마요,제육볶음) : "; cin >> menu1 >> menu2;
	*stock1 -= menu1; *stock2 -= menu2;
}

int turnover(int stock1, int stock2) {

	return (100 - stock1) * 1000 + (100 - stock2) * 1500;
}
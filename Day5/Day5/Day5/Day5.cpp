#include "struct.h"
#include "Stock.h"
//헤더 파일을 여러 파일에 포함시킬 때,
//반드시 단 한 번만 포함시켜야 함.


int main() {
	MyStruct Kwak = {
		"Kwak",
		25
	};

	display(Kwak);



	//추상화와 클래스
	//데이터형이란 무엇인가?
	//데이터형을 대상으로 어떠한 연산을 수행할 수 있는가?

	//클래스 : 추상화를 사용자 정의 데이터형으로 변화해주는 수단
	//추상화 : 어떠한 객체를 사실적으로 표현하는 것이 아니라, 공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것
	/*
	1. 클래스 선언
	2. 클래스 매서드 정의
	*/
	Stock temp = Stock("Samsumg", 100, 1000);
	Stock temp2("Panda", 100, 1000);

	Stock s[4] = {
		Stock("A", 10, 1000),
		Stock("B", 20, 1200),
		Stock("C", 20, 1200),
		Stock("D", 20, 1200),
	};

	//temp.acquire("Samsung", 100, 80000);
	temp.show();
	temp.buy(10, 82000);
	temp.show();
	temp.sell(5, 82000);
	temp.topval(temp2).show();
	temp.show();

	s[0].show();


	Stock *first = &s[0];
	for (int i = 1; i < 4; i++) {
		first = &first->topval(s[i]);
	}

	first->show();
	return 0;
}

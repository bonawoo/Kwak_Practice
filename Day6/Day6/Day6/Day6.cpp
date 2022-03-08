#include <iostream>
#include "time.h"

const int MAX = 3;
using namespace std;
int main() {
	Time day1(1, 20);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total;
	total = day1.operator+(day2);
	total.show();


	//C++ friend(private 변수에 접근 가능)
	//operator*
	day1 = 3 * day2; //a = b.operator*(3);
	day1.show();



	// << 연산자 오버로딩
	Time t1(3, 45);
	t1.show();

	std::cout << t1 << std::endl;




	/* <상속>
	1, 기존 클래스에 새로운 기능 추가
	2. 클래스의 데이터에 다른 것을 추가할 수 있다.
	3. 클래스 함수가 동작하는 방식을 변경할 수 있다.
	*/

	Time temp1(30,2);
	NewTime temp2(3, 30, 2);
	temp1.show();
	temp2.show();





	Time* times[MAX];
	int day;
	int hours;
	int mins;

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 원소를 정의합니다." << endl;
		cout << "시간을 입력하십시오." << endl;
		cin >> hours;
		cout << "분을 입력하십시오." << endl;
		cin >> mins;
		char check;
		cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오." << endl;
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins);
		else {
			cout << "일을 입력하십시오." << endl;
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 정보입니다." << endl;
		times[i]->show();
	}

	for (int i = 0; i < MAX; i++) {
		delete times[i];
	}


	return 0;
}

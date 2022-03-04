#include <iostream>

using namespace std;

void hellCPP(int);
int sumArr(int*, int);
struct Time {
	int hours;
	int mins;
};

const int minsPerHr = 60;
Time sum(Time*, Time*);
void showTime(Time);
void countDown(int);
int func(int);

int main()
{
	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}

	int i = 0;
	while (i < 3) {
		cout << i << endl;
		i++;
	}

	i = 0;
	do { // 최소 한번 수행
		cout << i << endl;
		i++;
	} while (i < 0);



	//배열 기반 반복문
	int a[5] = { 1,3,5,7 };
	for (int i : a) {
		cout << i;
	}


	//중첩 루프 : 2차원 배열에서 가장 많이 활용
	int temp[4][5] = 
	{
		{1,2,3,4,5},
		{11,22,33,44,55}
	};
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << endl;
		}
	}



	if (true) {
		cout << "참";
	}
	else {

	}


	int integer = 1;
	switch (integer)
	{
	case 1:
		cout << 1 << endl;
		break;

	case 2:
		cout << 2 << endl;
		break;
	}



	int times = 5;
	hellCPP(times);



	//함수는 원본이 아닌 복사본을 대상으로 작업함.
	Time day1 = { 5,45 };
	Time day2 = { 4,55 };
	
	Time total = sum(&day1, &day2);
	cout << "이틀 간 소요 시간 : ";
	showTime(total);




	//재귀호출 : C++에서 함수는 자기 자신을 호출할 수 있다.
	countDown(5);




	//함수를 지시하는 포인터
	//어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.
	/*
	1. 함수의 주소를 얻는다.
	2. 함수를 지시하는 포인터를 선언한다.
	3. 함수를 지시하는 포인터를 사용하여 그함수를 호출한다.
	*/
	cout << func << endl; // 1.
	int (*pf)(int);
	pf = func;

	cout << (*pf)(3) << endl;
	return 0;
}

void hellCPP(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Hello, C++\n";
	}
}

int sumArr(int* arr, int n) {
	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}

Time sum(Time* t1, Time* t2) {
	Time total;

	total.mins = (t1->mins + t2->mins) % minsPerHr; //주소에 대해서 접근할 때는 -> 사용
	total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;

	return total;
}

void showTime(Time t1) {
	cout << t1.hours << "시간" << t1.mins << "분" << endl;
}

void countDown(int n) {
	cout << "Counting.." << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "번째 재귀함수" << endl;
}

int func(int n) {
	return n + 1;
}
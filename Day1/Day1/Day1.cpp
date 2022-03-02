#include <iostream> //전처리 지시자
#include <climits>

/* 함수의 원형을 정의하지 않으면 함수를 사용할 수 없다. */

using namespace std;

int main()//반드시 존재
{
	cout << "Hello, World!" << endl;

	int a; //변수 선언
	a = 7; //대입
	int t = 3; //초기화

	cout << a << endl;


	//정수형
	//int n_int = INT_MAX;
	//short n_short = SHRT_MAX;
	//long n_long = LONG_MAX;
	//long long n_long = LLONG_MAX;

	unsigned int ab; //unsigned : 음의 값 저장 X

	//실수형
	float d = 0.1;

	char b;//작은 문자형(보통 한글자), 큰따옴표 사용 불가
	//"" >> 명시적으로 null 문자가 포함되어 있음.(String)

	//bool형 : 0 혹은 1
	bool c;


	//원의 넓이 구하기

	const float PIE = 3.141592; //상수 선언

	int r = 3;
	float s = r * r * PIE;

	cout << s << endl;


	//데이터형 변환
	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을때
	2. 수식에 데이터형을 혼합하여 사용했을 때
	3. 함수에 매개변수를 전달할 때
	*/

	int aaa = 3.142592;
	cout << aaa << endl;

	//강제적으로 데이터형 변환
	//typeName(aaa) (typeName)aaa
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << "  " << static_cast<int>(ch) << endl;

	//At C++
	//static_cast<typeName>


	

	//auto 
	auto n = 100; //int
	auto x = 1.5; // float
	auto y = 1.3e12L; // long long

	
	return 0;

}

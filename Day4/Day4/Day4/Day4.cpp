
#include <iostream>

using namespace std;

inline float square(float x) { return x * x; }

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);


int sum(int, int);
float sum(float, float);

//class 혹은 typeName
template <class Any>
Any summary(Any, Any);

template <class Any>
Any summary(int, Any);

int main()
{
	//일반적인 함수의 호출은 함수의 주소로 점프하는 과정
	//컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
	int a = 5;
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는??" << endl;
	float b = square(a);
	cout << b << endl;


	//참조 : 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
	//함수의 매개변수에 사용
	int c;
	int& d = a;

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "최초 상태" << endl;
	cout << "wallet1 = " << wallet1 << " , wallet2 = " << wallet2 << endl;

	cout << "참조를 이용한 값의 교환 " << endl;
	swapA(wallet1, wallet2);
	cout << "참조 교환 이후 상태" << endl;
	cout << "wallet1 = " << wallet1 << " , wallet2 = " << wallet2 << endl;

	cout << "포인터를 이용한 값의 교환 " << endl; 
	swapB(&wallet1, &wallet2);
	cout << "포인터 교환 이후 상태" << endl;
	cout << "wallet1 = " << wallet1 << " , wallet2 = " << wallet2 << endl;

	cout << "값을 이용한 값의 교환 " << endl;
	swapC(wallet1, wallet2);
	cout << "값 교환 이후 상태" << endl;
	cout << "wallet1 = " << wallet1 << " , wallet2 = " << wallet2 << endl;



	//함수의 오버로딩 : 여러 개의 함수를 같은 이름으로 연결한다.
	cout << sum(1,2) << endl;




	//함수 템플릿(일반화에 대한 서술)
	//구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
	int e = 3;
	int f = 5;
	//cout << summary(e, f) << endl;

	float g = 3.14;
	float h = 1.592;
	cout << summary(g, h) << endl;

	cout << summary(e, g) << endl;
	return 0;
}

//참조로 전달하는 방식
void swapA(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

//포인터로 전달하는 방식
void swapB(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//값으로 전달하는 방식
void swapC(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}


int sum(int a , int b) {
	return a + b;
}
float sum(float a, float b){
	return a + b;
}

template <class Any>
Any summary(Any a, Any b) {
	return a + b;
}

template <class Any>
Any summary(int a, Any b) {
	return a + b;
}
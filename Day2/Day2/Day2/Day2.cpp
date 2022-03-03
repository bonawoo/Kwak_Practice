#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> //strlen()
#include <string>
#define SIZE 20
using namespace std;

struct OurStruct
{
	char name[20];
	int age;
};
int main()
{
	//배열 typeName arrayName[arraySize]; (같은 데이터형)

	short month[12] = { 1,2,3,4,5,6 };

	//문자열
	//char a[] = { 'H','E','L','L','O','\0' };
	char a[] = "HELLO";
	std::cout << a << std::endl;


	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "저는" << name2;
	cout << name2 << "이고 당신의 이름은??\n";
	//cin >> name1;
	cin.getline(name1, Size); //공백 저장 가능
	cout << strlen(name1) << "자이고\n";
	cout << sizeof(name1) << "바이트입니다.";




	//C++에서 문자열을 다루는 방법 중 하나인 string
	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2; //틀리다
	str1 = str2; // 맞다
	cout << str1[0] << endl;




	//구조체(중요) : 다른 데이터형이 허용되는 데이터의 집합
	//cf) 배열 : 같은 데이터형의 집합
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	} B;

	MyStruct A;
	A.name = "Son";
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;

	MyStruct AB = {
		"Son",
		"Striker",
		183,
		77
	};

	cout << A.name << endl;

	B.height = 183;
	cout << B.height << endl;

	MyStruct C[2] = {
		{"A","A",1,1},
		{"B","B",2,2}
	};

	cout << C[0].name << endl;




	//공용체(union) : 서로 다른 데이터형을 한 번에 한가지만 보관할 수 있음.
	union MyUnion
	{
		int intVal;
		long longVal;
	};
	MyUnion test;
	test.intVal = 5;
	test.longVal = 55;
	cout << test.intVal << endl;

	//열거체(enum) : 기호 상수를 만드는 것에 대한 또다른 방법.
	enum spectrum { red, orange, green, blue, indigo };
	/*
	1. spectrum 을 새로운 데이터형 이름으로 만듦
	2. red, orange, green 등 0에서 부터 4까지 정수 값을 각각을 나타내는 기호 상수로 만듦
	*/
	spectrum enumStr = orange;
	cout << enumStr << endl;






	//변수 선언 과정
	int val = 3;
	cout << &val << endl;//주소 출력(16진수)

	//C++ : 객체지향 프로그래밍
	/*
	컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
	- 배열 생성
	재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정되어야 함(컴파일 시간에)
	객체지향 프로그래밍 : 배열의 크기를 실행 시간에 결정할 수 있음.
	*/


	//포인터 : 사용할 주소에 이름을 붙인다.
	//즉, 포인터는 포인터의 이름이 주소를 나타냄.
	//간접값 연산자, 간접 참조 연산자 *

	int *p; //c style
	int* q; //c++ style
	int* o, r; //o는 포인터 변수, r은 int형 변수

	int aa = 6;
	int* bb; //위치
	bb = &aa;

	cout << *bb << endl;
	cout << aa << endl;
	cout << bb << endl;
	cout << &aa << endl;

	*bb = *bb + 1;
	cout << aa << endl;



	//new 연산자
	/*
	어떤 데이터형을 원하는지 new 연산자에게 알려주면,
	new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고 그 블록의 주소를 리턴합니다.
	*/

	int* pointer = new int; //접근할 수 있는 유일한 방법
	cout << pointer << endl;


	//delete 연산자
	/*
	사용한 메모리를 다시 메모리 폴로 환수
	환수된 메모리는 프로그램의 다른 부분이 다시 사용
	new 사용 뒤 반드시 delete 사용해야함 (메모리 누수 발생 가능)
	*/

	/*
	delete 규칙
	1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
	2. 같은 메모리 블록을 연달아 두번 delete로 해제할 수 없다.
	3. new[]로 메모리를 대입할 경우 delete[]로 해제한다.
	4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
	*/

	int* psp = new int;
	//메모리 사용
	delete psp;

	double* p3 = new double[3];
	p3[0] = 0.2; //배열 이름처럼 취급
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << endl;

	p3 = p3 + 1; // 포인터 증가

	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << endl;

	p3 = p3 - 1; //다시 시작 위치 지시
	delete[] p3; //배열 메모리 해제





	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal); //복사

	cout << "입력하신 동물 이름을 복사하였습니다." << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << " 이고, 그 주소는 " << (int*)ps << " 입니다." << endl;




	//동적 구조체 생성
	//temp* ps = new temp;
	OurStruct* temp = new OurStruct;
	cout << "당신의 이름을 입력 하십시오\n";
	cin >> temp->name;
	cout << "당신의 나이를 입력하십시오 \n";
	cin >> (*temp).age;

	cout << temp->name << temp->age << "세" << endl;

	return 0;
}


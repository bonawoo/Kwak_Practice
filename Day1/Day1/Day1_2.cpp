#include <iostream>
//#define PIE 3.141592

using namespace std;

int main() {
	//원의 넓이 구하기

	const float PIE = 3.141592; //상수 선언

	int r = 3;
	float s = r * r * PIE;

	cout << s << endl;

	return 0;
}
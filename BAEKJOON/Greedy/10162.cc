#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 5 * 60;
	int b = 60;
	int c = 10;
	int a_cnt, b_cnt, c_cnt;
	a_cnt = n / a;
	b_cnt = (n % a) / b;
	c_cnt = ((n % a) % b) / c;

	if ((n - a*a_cnt - b*b_cnt - c*c_cnt) == 0) {
		cout << a_cnt << " " << b_cnt << " " << c_cnt;
	}
	else {
		cout << -1;
	}
	return 0;
}
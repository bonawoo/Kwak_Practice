#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 50000;
int main() {
	int n;
	cin >> n;
	int arr[MAX_SIZE];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int total = 0;
	sort(arr, arr + n);
	for (int i = 0; i < n - 1; i++) {
		total += arr[i];
	}
	cout << total;
	return 0;
}
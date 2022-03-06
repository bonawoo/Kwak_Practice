#ifndef STOCK
#define STOCK

#include <iostream>
#include <string>

using namespace std;

class Stock {
private://데이터 은닉
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

public:
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock& topval(Stock&);
	Stock(string, int, float);
	Stock();
	~Stock();
};
#endif
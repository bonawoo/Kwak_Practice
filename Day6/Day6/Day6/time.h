#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	virtual void show(); // ���� �޼ҵ�
	/*
	1. ���� Ŭ�������� ����޼��带 �����ϸ�, ���� Ŭ���� �� �Ļ� Ŭ�������� ��� ������ �ȴ�.
	2. ��ü�� ���� ������ ����Ͽ�, ��ü�� �����ϴ� �����͸� ����Ͽ� ���� �޼��带 ȣ��Ǹ� ������ �����͸� ���� ���ǵ� �޼��带 ������� �ʰ�
	��ü���� ���� ���ǵ� �޼��带 ����Ѵ� . > ���� ����
	3. ����� ���� ���� Ŭ������ ����� Ŭ������ ������ ��,
	�Ļ� Ŭ�������� �ٽ� �����ؾ� �Ǵ� Ŭ���� �޼������ ���� �Լ��� �����ؾ� �Ѵ�.
	*/
	virtual ~Time();
	int getHour() { return hours; }
	int getMins() { return mins; }
	//friend
	friend Time operator*(int n , Time& t) {
		return t * n;
	}//member �Լ��� �ƴ�(. or -> ����Ͽ� ȣ�� �Ұ���) But ��� �Լ��� ������ ���� ����


	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time {//�Ļ� Ŭ���� ����
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void print();
	void show();
};
#endif
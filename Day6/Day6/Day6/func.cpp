#include "time.h"

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	hours += h;
};

void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
};

Time Time::operator+(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
};

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.hours = resultMin % 60;
	return result;
}
void Time::show() {
	std::cout << "시간 : " << hours << std::endl;
	std::cout << "분 : " << mins << std::endl;
}

Time::~Time()
{
}

std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "시간 " << t.mins << "분";
	return os;
}

//파생 클래스는 private에 접근할 수 없다. public은 가능, 따라서 : 
NewTime::NewTime() : Time(){ 
	day = 0;//hours, mins는 이미 초기화 되어있음 Time()에서
}
NewTime::NewTime(int h, int m, int d) : Time(h,m){
	day = d;
}
void NewTime::print() {

	std::cout << "일 : " << day << std::endl;
	show();
}
void NewTime::show() {

	std::cout << "일 : " << day << std::endl;
	std::cout << "시간 : " << getHour() << std::endl;
	std::cout << "분 : " << getMins() << std::endl;
}
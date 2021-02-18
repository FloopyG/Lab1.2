#include "Time.h"
#include <iostream>

using namespace std;

bool Time::setHour(int value) {
	if (value >= 0 && value <= 23) {
		hour = value;
		return true;
	}
	else {
		hour = 0;
		return false;
	}
}

bool Time::setMinute(int value) {
	if (value >= 0 && value <= 59) {
		minute = value;
		return true;
	}
	else {
		minute = 0;
		return false;
	}
}

bool Time::setSecond(int value) {
	if (value >= 0 && value <= 59) {
		second = value;
		return true;
	}
	else {
		second = 0;
		return false;
	}
}

bool Time::Init(int hour, int minute, int second) {
	return setHour(hour) && setMinute(minute) && setSecond(second);
}

void Time::Read() {
	int hour, minute, second;

	do {
		cout << "Enter hour: "; cin >> hour;
		cout << "Enter minute: "; cin >> minute;
		cout << "Enter second: "; cin >> second;
	} while (!Init(hour, minute, second));
}

void Time::Display() {
	cout << "Hour: " << hour << endl;
	cout << "Minute: " << minute << endl;
	cout << "Second: " << second << endl;
}

void Time::template1() {
	cout << getHour() << " hours " << getMinute() << " minutes " << getSecond() << " seconds " << endl;
}

void Time::template2() {
	if (getHour() < 12 && getHour() > 0) {
		cout << getHour() << " a.m. " << getMinute() << " minutes " << getSecond() << " seconds " << endl;
	}
	else if (getHour() == 0) {
		cout << getHour() + 12 << " a.m. " << getMinute() << " minutes " << getSecond() << " seconds " << endl;
	}
	else if (getHour() == 12) {
		cout << getHour() << " p.m. " << getMinute() << " minutes " << getSecond() << " seconds " << endl;
	}
	else {
		cout << getHour() - 12 << " p.m. " << getMinute() << " minutes " << getSecond() << " seconds " << endl;
	}
}
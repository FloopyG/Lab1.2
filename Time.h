#pragma once

class Time
{
private:
	int hour, minute, second;
public:
	int getHour() const { return hour; }
	int getMinute() const { return minute; }
	int getSecond() const { return second; }

	bool setHour(int);
	bool setMinute(int);
	bool setSecond(int);

	bool Init(int hour, int minute, int second);
	void Read();
	void Display();

	void template1();
	void template2();
};

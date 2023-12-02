#ifndef TIME_H
#define TIME_H

#include <stdio.h>

struct Time {
	int hour;
	int minutes;
	int seconds;
};

struct Date {
	int day;
	int month;
	int year;
};

struct DateTime
{
	Date date;
	Time time;
};

void PrintTime(Time time) {
	printf("%02d:%02d:%02d", time.hour, time.minutes, time.seconds);
}

void PrintDate(Date date) {
	printf("%02d-%02d-%04d", date.day, date.month, date.year);
}

int TimeToSeconds(Time time) {
	return time.hour * 3600 + time.minutes * 60 + time.seconds;
}

int DiffBetweenTimeInSeconds(Time t1, Time t2) {
	int seconds1 = TimeToSeconds(t1);
	int seconds2 = TimeToSeconds(t2);

	return seconds2 - seconds1;
}




#endif
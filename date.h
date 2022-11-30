#include <iostream>

#ifndef DATE_H
#define DATE_H
class Date{
public:
	Date(int month = 1, int day = 1, int year=1922);
	int month() const ;
	int day() const ;
	int year() const;
	void updateMonth(int month);
	void updateDay(int day);
	void updateYear(int year);
	bool operator == (const Date& d) const;
	bool operator != (const Date& d) const;
	bool operator < (const Date& d) const;
	bool operator <= (const Date& d) const;
	bool operator >= (const Date& d) const;
	bool operator > (const Date& d) const;
	Date operator + (int days) const;
	Date operator - (int days) const;
	Date operator ++ (int);
	Date operator -- (int);
	Date operator ++ ();
	Date operator --();
private:
	int _month;
	int _day;
	int _year;
};
int dayOfYear(Date d);
bool isdate(int month, int day);
int getDaysInMonth(int month);
std::string toString(Date d);
void next(Date &d);
void back(Date &d);
Date operator + (const int days, const Date& d);
std::ostream& operator << (std::ostream& os, const Date& d);
#endif


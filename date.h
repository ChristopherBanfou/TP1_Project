#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int day=1, int month=1, int year=1);
   int month() const;
   int day() const;
   int year() const;
   void updateMonth(int month);
   void updateDay(int day);
   void updateYear(int year);
   void next();
   void back();
private:
   int _month;
   int _day;
   int _year;
};
void read_date(Date d);
bool isDate(int month, int day);
int getDaysInMonth(int month);
int dayOfYear(Date d);

#endif 

#include "date.h"
#include "assert.h"

Date::Date(int month, int day, int year) : _month(month), _day(day), _year(year) {
	bool status = isdate(month, day);
	assert(status && "Date is not valid");
}
int Date::month() const {
	return _month;
}
int Date::day() const {
	return _day;
}
int Date::year() const {
	return _year;
}
bool isdate(int month, int day){
	if(month < 1 || month >12) return false;
	if(day <1 || day>31 ) return false;
	if(((month == 4 || month == 6 || month == 9 || month == 11 ) && day > 30)) return false;
	if(month == 2 & day>28) return false;
	return true;
}
void Date::updateMonth(int month){
	bool status = isdate(month, _day);
	assert(status && "Day is not valid");
	_month = month;
}
void Date::updateDay(int day){
	bool status = isdate(_month, day);
	assert(status && "Day is not valid");
	_day = day;
}
void Date::updateYear(int year){
	_year = year;
}
int getDaysInMonth(int month){
	assert((month >= 1 && month <= 12) && "Month is not valid");
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) return 31;
	if (month == 2 ) return 28;
	return 30;
}
int dayOfYear(Date d){
	auto day = 0;
	for (auto i = 1; i < d.month(); ++i)
	{
		day+=getDaysInMonth(i);
	}
	day+=d.day();
	return day;
}
void next(Date &d){
	if(d.month() == 12 &&  d.day()==31){
		d.updateMonth(1);
		d.updateDay(1);
	}
	else if(d.day()==getDaysInMonth(d.month())){
		d.updateDay(1);
		d.updateMonth(d.month()+1);
	}
	else{
		d.updateDay(d.day()+1);
	}
}
void back(Date &d){
	if(d.month()==1 && d.day() ==1){
		d.updateDay(31);
		d.updateMonth(12);
	}
	else if(d.day() == 1){
		d.updateMonth(d.month()-1);
		d.updateDay(getDaysInMonth(d.month() - 1));
		
	}
	else{
		d.updateDay(d.day()-1);
	}
}
std::ostream& operator << (std::ostream& os, const Date& d){
	std::string month [12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	std::string to_display = month[d.month() - 1] + "/" + std::to_string(d.day())+ "/" + std::to_string(d.year()) ;
	os << to_display << std::endl;
	return os;
}
bool Date::operator == (const Date& d) const{
	if (_month==d.month() && _year==d.year() && _day==d.day()){
		return true;
	}
	return false;
}
bool Date::operator != (const Date& d) const{
	return !(*this == d);
}
bool Date::operator < (const Date& d) const{
	if ((_year<d.year())) return true;
	if ((_year == d.year()) && (_month<d.month())) return true;
	if ((_year == d.year()) && (_month==d.month()) && (_day<d.day())) return true;
	return false;
}
bool Date::operator <= (const Date& d) const{
	if (d == *this) return true;
	if(*this<d) return true;
	return false;
}
bool Date::operator > (const Date& d) const{
	return !(*this<=d);
}
bool Date::operator >= (const Date& d) const{
	return !(*this<d);
}
Date Date::operator + (int days) const{
		if(days < 0){
		return *this - (-days);
	}
	Date tmp = *this;
	int new_day = tmp.day() + days;
	int new_month = tmp.month();
	while(new_day > getDaysInMonth(new_month)){
		new_day = new_day - getDaysInMonth(new_month);
		new_month++;
		if(new_month > 12){
			new_month = 1;
			tmp.updateYear(tmp.year()+1);
		}
	}
	return Date (new_month,new_day,tmp.year());
}
Date operator +(const int days, const Date& date){
		if(days < 0){
		return date - (-days);
	}
	return date + days;
}
Date Date::operator - (int days) const{
	if(days < 0){
		return *this + (-days);
	}
	Date tmp = *this;
	int new_day = tmp.day() -  days;
	int month =tmp.month();
	while(new_day < 0){
	month-- ;		
		if(month < 1){
			month=12 ;
			tmp.updateYear(tmp.year()-1) ;
		}
		new_day= new_day + getDaysInMonth(tmp.month());
		tmp.updateMonth(month);
	}
		tmp.updateDay(new_day);
		return tmp;
	}
Date Date::operator ++(int) { 
        Date tmp = *this;
        *this = tmp +1;
        return tmp;
    }

Date Date::operator --(int) {
        Date tmp = *this;
        *this = *this - 1;
        return tmp;
    }
Date Date::operator ++() {
        *this = *this + 1;
        return *this;
    }

Date Date::operator --() {
        *this = *this - 1;
        return *this;
    }
std::string toString(Date d) {
    return std::to_string(d.day()) + "/" + std::to_string(d.month()) ;
}

void read_date(Date d){
    std::cout<<  d.day()  << "/" << d.month() <<"/"<< d.year() << std::endl;
}   
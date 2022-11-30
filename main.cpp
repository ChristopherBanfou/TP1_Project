#include "date.h"
#include <iostream>
int main(int argc, char const *argv[])
{
	Date d(3,2,1977);
	d = 365+d;
	Date d1(12,25,2004);
    std::cout << d1;
	return 0;
}
#include <iostream>
#include "Livre.h"
#include "date.h"
int main(int argc, char const *argv[])
{
	Date d(3,2,1977);
	d = 365+d;
	Date d1(12,25,2004);
    std::cout << d1;

	std::vector<std::string> liste;
	Auteur a("7", "Ronaldo", "Cristiano", d);
	Livre L("Real Madrid" , a , "Espagnol" , "Football" ,d, "7777777" ,liste);
	read_livre(L);
	L.update_liste("Benzema");
	L.update_liste("Benzema");
	L.update_liste("Asensio");
	L.update_liste("Isco");
	read_livre(L);
	return 0;
}
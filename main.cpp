#include <iostream>
#include "Livre.h"
#include "date.h"
#include "emprunt.h"
#include "Lecteur.h"

int main(int argc, char const *argv[])
{
	Date d(3,2,1977);
	d = 365+d;
	Date d1(12,25,2004);
    std::cout << d1;

	std::vector<std::string> liste;
	std::vector<std::string> liste_Lec1;
	std::vector<std::string> liste_Lec2;

	Auteur a("7", "Ronaldo", "Cristiano", d);
	std::cout << std::endl << a;

	Lecteur Lec1("7", "Rayane", "Mouazer", liste_Lec1);
	Lecteur Lec2("723", "Christopher", "Babana", liste_Lec2);

	Livre L("Real Madrid" , a , "Espagnol" , "Football" ,d, "7777777" ,liste);

	read_livre(L);

	L.update_liste("Isco");
	Emprunt E1(d1, L, Lec1);

	read_livre(L);
	std::cout << L;
	std::cout << Lec1;
	return 0;
}
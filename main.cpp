#include <iostream>
#include "Livre.h"
#include "date.h"
#include "emprunt.h"
int main(int argc, char const *argv[])
{
	Date d(3,2,1977);
	d = 365+d;
	Date d1(12,25,2004);
    std::cout << d1;

	std::vector<std::string> liste;
	std::vector<std::string> liste_Lec;
	Auteur a("7", "Ronaldo", "Cristiano", d);
	Lecteur Lec("7", "Rayane", "Mouazer", liste_Lec);
	Livre L("Real Madrid" , a , "Espagnol" , "Football" ,d, "7777777" ,liste);
	read_livre(L);
	L.update_liste("Isco");
	Emprunt E(d1, L, Lec);
	read_livre(L);
	read_lecteur(Lec);
	return 0;
}
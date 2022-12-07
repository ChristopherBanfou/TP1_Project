#include <iostream>
#include "Livre.h"
#include "date.h"
#include "emprunt.h"
#include "bibliotheque.h"
#include "Lecteur.h"

int main(int argc, char const *argv[])
{
	Date d1(3,2,1977);
	Date d2(9,9,1999);
	Date d3(9,7,2018);
	Date d4(1,13,2022);
	Date d5(12,27,2022);
	Date d6(12,25,2022);

	std::vector<std::string> liste1;
	std::vector<std::string> liste2;
	std::vector<std::string> liste3;
	std::vector<std::string> liste4;
	std::vector<std::string> liste5;
	std::vector<std::string> liste6;
	std::vector<std::string> liste7;
	std::vector<std::string> liste8;
	std::vector<std::string> liste9;
	std::vector<std::string> liste10;
	std::vector<std::string> liste11;
	std::vector<std::string> liste12;									
	std::vector<std::string> liste_Lec1;
	std::vector<std::string> liste_Lec2;
	std::vector<std::string> liste_Lec3;

	Auteur a1("CR7", "Ronaldo", "Cristiano", d1);
	Auteur a2("SE9", "Eto'o", "samuel", d2);
	Auteur a3("TS", "Shelby", "Thomas", d2);

	Lecteur Lec1("RM7", "Mouazer", "Rayane", liste_Lec1);
	Lecteur Lec2("BC3", "Christopher", "Babana", liste_Lec2);
	Lecteur Lec3("AS601", "Storm", "Adam", liste_Lec3);

	Livre L1("Real Madrid" , a1 , "Espagnol" , "Football" , d3, "0007777" ,liste1);
	Livre L2("Lions indomptables" , a2 , "Francais" , "Football" , d4, "0000237" ,liste2);
	Livre L3("Peaky Blinders" , a3 , "English" , "Action" , d4, "0001237" ,liste3);
	Livre L4("Titanic" , a2 , "Francais" , "Romance" , d4, "0009374" ,liste4);
	Livre L5("Cercle Vicieux" , a2 , "Francais" , "Drame" , d4, "0001720" ,liste5);
	Livre L6("The Legend" , a1 , "Francais" , "Histoire" , d4, "0006499" ,liste6);
	Livre L7("Plaines et Montagnes" , a3 , "Francais" , "Geography" , d4, "0001730" ,liste7);
	Livre L8("Jeffrey Dahmer" , a3 , "Francais" , "Police" , d4, "0000384" ,liste8);
	Livre L9("Uncharted" , a1 , "English" , "Aventure" , d4, "0006430" ,liste9);
	Livre L10("Amour de Dijon" , a2 , "Francais" , "Romance" , d4, "0000033" ,liste10);
	Livre L11("Le soleil de minuit" , a1 , "Francais" , "Poesi" , d4, "0001111" ,liste11);
	Livre L12("Algerie CDM" , a3 , "Arabe" , "Comedie" , d4, "0009839" ,liste12);


	Emprunt E1(d5, L1, Lec1);
	Emprunt E2(d6, L2, Lec2);
	Emprunt E3(d6, L4, Lec3);

	std::vector<Livre> livre;
	std::vector<Lecteur> lecteur;
	std::vector<Emprunt> emprunt;
	std::vector<Auteur> auteur;

	Bibliotheque B(livre, lecteur, emprunt, auteur);

	B.update_auteur(a1);
	B.update_auteur(a2);
	B.update_auteur(a3);

	B.update_livre(L1);
	B.update_livre(L2);
	B.update_livre(L3);
	B.update_livre(L4);
	B.update_livre(L5);
	B.update_livre(L6);
	B.update_livre(L7);
	B.update_livre(L8);
	B.update_livre(L9);
	B.update_livre(L10);
	B.update_livre(L11);
	B.update_livre(L12);

	B.update_lecteur(Lec1);
	B.update_lecteur(Lec2);
	B.update_lecteur(Lec3);

	B.update_emprunt(E1);
	B.update_emprunt(E2);
	B.update_emprunt(E3);

	read_biblio(B);
	return 0;
}
#pragma once
#include <iostream>
#include <vector>
#include "Livre.h"
#include "Lecteur.h"
#include "emprunt.h" 
#include "Auteur.h"

class Bibliotheque
{
public:
	Bibliotheque(std::vector<Livre> livre, std::vector<Lecteur> lecteur, std::vector<Emprunt> emprunt, std::vector<Auteur> _auteur);
	std::vector<Livre> get_livre() const;
	std::vector<Lecteur> get_lecteur() const;
	std::vector<Emprunt> get_emprunt() const;
	std::vector<Auteur> get_auteur() const;
	void update_livre(Livre L);
	void update_lecteur(Lecteur Lec);
	void update_emprunt(Emprunt E);
	void update_auteur(Auteur A);
	bool operator == (const Bibliotheque& e) const;
	bool operator != (const Bibliotheque& e) const;
private:
std::vector<Auteur> _auteur;
std::vector<Livre> _livre;
std::vector<Lecteur> _lecteur;
std::vector<Emprunt> _emprunt;	
};
void read_biblio(Bibliotheque B);
std::ostream& operator << (std::ostream& os, const Bibliotheque& B);

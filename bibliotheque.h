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
	void emprunter(Lecteur &Lec, Livre &L, Date d);
	void restituer(Lecteur &Lec, Livre &L);
	void update_livre(Livre L);
	void update_lecteur(Lecteur Lec);
	void update_emprunt(Emprunt E);
	void update_auteur(Auteur A);
	void livre_auteur(Auteur A);
	void livre_emprunt();
	void lecteur_emprunt(Lecteur L);
	bool operator == (const Bibliotheque& e) const;
	bool operator != (const Bibliotheque& e) const;
	void arrange();
private:
std::vector<Auteur> _auteur;
std::vector<Livre> _livre;
std::vector<Lecteur> _lecteur;
std::vector<Emprunt> _emprunt;	
};
std::ostream& operator << (std::ostream& os, const Bibliotheque& B);

#pragma once
#include <iostream>
#include "date.h"

class Auteur
{
public:
	Auteur(std::string id_numerique, std::string nom, std::string prenom, Date date_de_naissance);
	Auteur();
	std::string get_id_numerique() const;
	std::string get_nom() const;
	std::string get_prenom() const;
	Date get_date_de_naissance() const;
	bool operator == (const Auteur& a) const;
	bool operator != (const Auteur& a) const;

private:
	std::string _id_numerique;
	std::string _nom;
	std::string _prenom;
	Date _date_de_naissance;
};
std::ostream& operator << (std::ostream& os, const Auteur& a);
#include <iostream>
#include "Auteur.h"

Auteur::Auteur(std::string id_numerique, std::string nom, std::string prenom, Date date_de_naissance){
	_id_numerique=id_numerique;
	_nom=nom;
	_prenom=prenom;
	_date_de_naissance=date_de_naissance;
}
Auteur::Auteur(){
	_id_numerique="null";
	_nom="null";
	_prenom="null";
	Date _date_de_naissance(1, 1, 1);

}

	std::string Auteur::get_id_numerique() const{
		return _id_numerique;
	}

	std::string Auteur::get_nom() const{
		return _nom;
	}

	std::string Auteur::get_prenom() const{
		return _prenom;
	}

	Date Auteur::get_date_de_naissance() const{
		return _date_de_naissance;
	}

std::ostream& operator << (std::ostream& os, const Auteur& a){
	std::string to_display = "Informations de l'auteur :  \n Noms et prenoms : " + a.get_prenom() + " " + a.get_nom() + "\n Date de naissance :";
	os << to_display << a.get_date_de_naissance() << std::endl;
	return os;
}
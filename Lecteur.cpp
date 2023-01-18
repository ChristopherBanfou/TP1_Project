#include <iostream>
#include "Lecteur.h"

Lecteur::Lecteur(std::string id, std::string nom, std::string prenom, std::vector<std::string> liste){
	_id=id;
	_nom=nom;
	_prenom=prenom;
	_liste=liste;
}
Lecteur::Lecteur(){
	_id="null";
	_nom="null";
	_prenom="null";
}

	std::string Lecteur::get_id() const{
		return _id;
	}
	std::string Lecteur::get_nom() const{
		return _nom;
	}
	std::string Lecteur::get_prenom() const{
		return _prenom;
	}
	std::vector<std::string> Lecteur::get_liste() const{
		return _liste;
	}
	 void Lecteur::update_liste(std::string ISBN){
	 	_liste.push_back(ISBN);
	 }
std::ostream& operator << (std::ostream& os,  Lecteur& L){
	std::string to_display = "Informations du lecteur : Identifiant : " + L.get_id() + "\n Noms et prenoms : " + L.get_prenom() + " " + L.get_nom() + "\n";
	to_display = to_display + "Liste des livres empruntés : ";
		for (int i = 0; i < L.get_liste().size(); ++i)
	{
		to_display = to_display + L.get_liste().at(i) + "," + " ";
	}
	os << to_display << std::endl;
	return os;
}
	bool Lecteur::operator == (const Lecteur& L) const{
		if(L.get_id() == _id && L.get_liste() == _liste && L.get_nom() == _nom && L.get_prenom() == _prenom){
			return true;
		}
		return false;

	}
	bool Lecteur::operator != (const Lecteur& a) const{
		return !(a == *this);

	}
	bool Lecteur::operator < (const Lecteur& L) const{
		if(_liste.size() < L.get_liste().size()){
		return true;
		}
		return false;
	}
	bool Lecteur::operator <= (const Lecteur& L) const{
		if(*this == L) return true;
		if(*this < L) return true;
		return false;
	}
	bool Lecteur::operator >= (const Lecteur& L) const{
		return !(*this<L);
	}
	bool Lecteur::operator > (const Lecteur& L) const{
		return !(*this<=L);
	}
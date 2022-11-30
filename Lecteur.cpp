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
	_liste=std::vector<std::string> v;
}

	std::string Lecteur::get_id(){
		return _id;
	}
	std::string Lecteur::get_nom(){
		return _nom;
	}
	std::string get_prenom(){
		return _prenom;
	}
	std::vector<std::string> get_liste(){
		return _litse;
	}

	void read_lecteur(Lecteur L){
		std::cout<<"Informations du lecteur : ";
		std::cout<< "Noms et prenoms : ";
		std::cout<< a.get_prenom()<< " ";
		std::cout<< a.get_nom()<<" ,";
		std::cout<< "Date de naissance : ";
		read_date(a.get_date_de_naissance());

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
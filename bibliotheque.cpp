#pragma once
#include <iostream>
#include "bibliotheque.h"

Bibliotheque::Bibliotheque(std::vector<Livre> livre, std::vector<Lecteur> lecteur, std::vector<Emprunt> emprunt, std::vector<Auteur> auteur){
_livre=livre;
_lecteur=lecteur;
_emprunt=emprunt;
_auteur=auteur;
} 

std::vector<Auteur> Bibliotheque::get_auteur() const{
	return _auteur;
}
std::vector<Livre> Bibliotheque::get_livre() const{
	return _livre;
}
std::vector<Lecteur> Bibliotheque::get_lecteur() const{
	return _lecteur;
}
std::vector<Emprunt> Bibliotheque::get_emprunt() const{
	return _emprunt;
}

void Bibliotheque::update_auteur(Auteur A){
	_auteur.push_back(A);

}
void Bibliotheque::update_livre(Livre L){
	_livre.push_back(L);
}
void Bibliotheque::update_lecteur(Lecteur Lec){
	_lecteur.push_back(Lec);
}
void Bibliotheque::update_emprunt(Emprunt E){
	_emprunt.push_back(E);
}

void read_biblio(Bibliotheque B){
	std::cout<<"Informations de la bibliotheque : "<<std::endl;
	std::cout<<"Liste des auteurs : ";
	for (int i = 0; i < B.get_auteur().size(); ++i)
	{
		std::cout<< B.get_auteur().at(i).get_prenom()<< " " << B.get_auteur().at(i).get_nom()<< ",  ";
	}
	std::cout<<" "<<std::endl;
	std::cout<<"Liste des livres [ Livre(ISBN) ] : " ;
	for (int i = 0; i < B.get_livre().size(); ++i)
	{
		std::cout<< B.get_livre().at(i).get_titre() <<"("<< B.get_livre().at(i).get_ISBN()<< ")" << ",  ";
	}
	std::cout<<" "<<std::endl;
	std::cout<<"Liste des lecteurs [ Lecteur(ID) ] : ";
	for (int i = 0; i < B.get_lecteur().size(); ++i)
	{
		std::cout<< B.get_lecteur().at(i).get_prenom()<< " " << B.get_lecteur().at(i).get_nom() <<"("<< B.get_lecteur().at(i).get_id()<< ")" << ",  ";
	}
	std::cout<<" "<<std::endl;
	std::cout<<"Liste des emprunts [ ISBN_Livre - ID_Lecteur ] : ";
	for (int i = 0; i < B.get_emprunt().size(); ++i)
	{
		std::cout<< B.get_emprunt().at(i).get_ISBN()<< " - " << B.get_emprunt().at(i).get_id()<< ",  ";
	}
	std::cout<<" "<<std::endl;
	std::cout<<" "<<std::endl;
}
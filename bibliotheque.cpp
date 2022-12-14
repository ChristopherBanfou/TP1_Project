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

void Bibliotheque::livre_auteur(Auteur A){
	std::cout<<"Les livres [Livre(ISBN)] ecrits par"<<A.get_prenom() <<" "<<A.get_nom() <<" sont : "<<std::endl;
	for (int i = 0; i < _livre.size(); i++)
	{
		if (_livre.at(i).get_auteur()==A)
		{
			std::cout<<"Livre "<<i<<" : "<<_livre.at(i).get_titre() <<"("<<_livre.at(i).get_ISBN()<< ")" <<std::endl;
		}
	}
}

void Bibliotheque::livre_emprunt(){
	int a=1;
	float moyenne=o;
	int nb=0;
	std::string ISBN_cible;
	std::cout<<"Les livres [Livre(ISBN] empruntes sont : "<<std::endl;
	for (int i = 0; i < _emprunt.size(); i++)
	{
		if (ISBN_cible != _emprunt.at(i).get_ISBN())
		{
			nb++;
			for (int j = 0; j < _livre.size(); j++)
			{
				if ( _emprunt.at(i).get_ISBN()== _livre.at(j).get_ISBN() )
				{
				std::cout<<"Livre "<<a<<" : "<<_livre.at(j).get_titre() <<"("<<_livre.at(j).get_ISBN()<< ")" <<std::endl;
				a++;
				}
			}
			ISBN_cible=_emprunt.at(i).get_ISBN();	
		}
	}
	moyenne= (nb/_livre.size())*100;
	std::cout<<"Le pourcentage de livre emprunte est : " << moyenne <<std::endl;
}

void Bibliotheque::lecteur_emprunt(Lecteur L){
	std::string  ISBN_cible="aaa";
	std::cout<<"Les livres empruntes par"<<L.get_prenom()<<" "<<A.get_nom()<<" sont : "<<std::endl;
	for (int i = 0; i < _emprunt.size(); i++)
	{
		if (_emprunt.at(i).get_id() == L.get_id())
		{
			if (_emprunt.at(i).get_ISBN!=ISBN_cible)
			{
				for (int j = 0; j < _livre.size(); j++)
				{
					if (_emprunt.at(i).get_ISBN()==_livre.at(j).get_ISBN())
					{
						std::cout<<_livre.at(j)<<std::endl;
					}
				}
				ISBN_cible=_emprunt.at(i).get_ISBN();
			}
		}
	}
std::ostream& operator << (std::ostream& os, const Bibliotheque& B){
	std::string to_display = "Informations de la Bibliotheque : \n Liste ds auteurs : ";
		for (int i = 0; i < B.get_auteur().size(); ++i)
	{
		to_display = to_display + B.get_auteur().at(i).get_prenom() + " " + B.get_auteur().at(i).get_nom() + ", ";
	}
	to_display = to_display + "\n Liste des livres [ Livre(ISBN) ] : ";
		for (int i = 0; i < B.get_livre().size(); ++i)
	{
		to_display = to_display + B.get_livre().at(i).get_titre() + "(" + B.get_livre().at(i).get_ISBN() +  ")" + ",  ";
	}

	to_display = to_display + "\n Liste des lecteurs [ Lecteur(ID) ] : ";
		for (int i = 0; i < B.get_lecteur().size(); ++i)
	{
		to_display = to_display + B.get_lecteur().at(i).get_prenom() + " " + B.get_lecteur().at(i).get_nom() + "(" + B.get_lecteur().at(i).get_id() + ")" + ",  ";
	}

	to_display = to_display + "\n Liste des emprunts [ ISBN_Livre - ID_Lecteur ] : ";
		for (int i = 0; i < B.get_emprunt().size(); ++i)
	{
		to_display = to_display + B.get_emprunt().at(i).get_ISBN() + " - " + B.get_emprunt().at(i).get_id() + ",  ";
	}
	os << to_display << std::endl;
	return os;


}
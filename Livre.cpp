#include <iostream>
#include "Livre.h"


 Livre::Livre(std::string titre, Auteur auteur, std:: string langue, std::string genre, Date date_de_publication, std::string ISBN, std::vector<std::string> liste){
 	_titre=titre;
	_auteur=auteur;
	_langue=langue;
	_genre=genre;
	_date_de_publication=date_de_publication;
	_ISBN=ISBN;
	_liste=liste;
	_status = true;
 }
	std::string  Livre::get_titre() const{
	 	return _titre;
	 }
	 Auteur Livre::get_auteur() const{
	 	return _auteur;
	 }
	 std::string Livre::get_langue() const{
	 	return _langue;
	 }
	 std::string Livre::get_genre() const{
	 	return _genre;
	 }
	 Date Livre::get_date_de_publication() const{
	 	return _date_de_publication;
	 }
	 std::string Livre::get_ISBN() const{
	 	return _ISBN;
	 }
	 std::vector<std::string> Livre::get_liste() const{
	 	return _liste;
	 }
	 void Livre::update_liste(std::string id){
	 	_liste.push_back(id);
	 }
bool Livre::get_status() const{
	return _status;
}
void Livre::update_status(bool status){
	_status = status;
}
std::ostream& operator << (std::ostream& os, Livre& L){
	std::string to_display = "Titre : " + L.get_titre() + "\n langue : " + L.get_langue() + "\n Genre : " + L.get_genre() + "\n ISBN : " + L.get_ISBN();
	to_display = to_display + " \n Liste des identifiants des emprunteurs : ";
		for (int i = 0; i < L.get_liste().size(); ++i)
	{
		to_display = to_display + L.get_liste().at(i) + " , ";
	}
	to_display = to_display + "\n Date de punlication : ";
	os << to_display << L.get_date_de_publication() << std::endl << L.get_auteur() << std::endl;
	return os;
}
bool Livre::operator == (const Livre& L) const{
	if(L.get_auteur() == _auteur && L.get_date_de_publication() == _date_de_publication && L.get_genre() == _genre && L.get_ISBN() == _ISBN && L.get_langue() == _langue && L.get_liste() == _liste && L.get_status() == _status && L.get_titre()==_titre){
		return true;
	}
	return false;

	}
bool Livre::operator != (const Livre& L) const{
		return !(*this==L);
	}


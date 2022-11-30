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

	 	Livre::get_liste().push_back(id);

	 }


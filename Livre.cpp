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
	_status = false;
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
void read_livre(Livre L){
	std::cout<<"Titre : "<< L.get_titre()<<std::endl;
	read_auteur(L.get_auteur());
	std::cout<<"Langue :"<<L.get_langue()<<std::endl;
	std::cout<<"Genre : "<<L.get_genre()<<std::endl;
	std::cout<<"Date de publication : ";
	read_date( L.get_date_de_publication() );
	std::cout<<"ISBN : "<<L.get_ISBN()<<std::endl;
	std::cout<<"Liste des identifiants des emprunteur :";
	for (int i = 0; i < L.get_liste().size(); ++i)
	{
		std::cout<< L.get_liste().at(i) << ", ";
	}
	std::cout<<" "<<std::endl;
}

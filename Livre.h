#pragma once
#include <iostream> 
#include <vector>
#include "date.h"
#include "Auteur.h"

class Livre
{
public:
	 Livre(	std::string titre, Auteur auteur, std:: string langue, std::string genre, Date date_de_publication, std::string ISBN, std::vector<std::string> liste);
	 std::string get_titre() const;
	 Auteur get_auteur() const;
	 std::string get_langue() const;
	 std::string get_genre() const;
	 Date get_date_de_publication() const;
	 std::string get_ISBN() const;
	 std::vector<std::string> get_liste() const;
	 void update_liste(std::string id);
	 void update_status(bool status);
	 bool get_status() const;
	
private:
	std::string _titre;
	Auteur _auteur;
	std:: string _langue;
	std::string _genre;
	Date _date_de_publication;
	std::string _ISBN;
	std::vector<std::string> _liste;
	bool _status;
};
std::ostream& operator << (std::ostream& os, Livre& L);
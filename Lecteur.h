#pragma once
#include <iostream>
#include <vector>

class Lecteur
{
public:
	Lecteur(std::string _id, std::string _nom, std::string _prenom, std::vector<std::string> liste);
	Lecteur();
	std::string get_id() const;
	std::string get_nom() const;
	std::string get_prenom() const;
	std::vector<std::string> get_liste() const;
	void update_liste(std::string ISBN);
	bool operator == (const Lecteur& L) const;
	bool operator != (const Lecteur& L) const;
	

private:
	std::string _id;
	std::string _nom;
	std::string _prenom;
	std::vector<std::string> _liste;	
};
std::ostream& operator << (std::ostream& os, Lecteur& L);
#pragma once
#include <iostream>
#include <vector>

class Lecteur
{
public:
	Lecteur(std::string _id, std::string _nom, std::string _prenom, std::vector<std::string> liste);
	Lecteur();
	std::string get_id();
	std::string get_nom();
	std::string get_prenom();
	std::vector<std::string> get_liste();

private:
	std::string _id;
	std::string _nom;
	std::string _prenom;
	std::vector<std::string> _liste;	
};
void read_lecteur(Lecteur L);
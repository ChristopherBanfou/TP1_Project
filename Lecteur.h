#include <iostream>
#include <vector>

class Lecteur
{
public:
	Lecteur(std::string _id, std::string _nom, std::string _prenom, std::vector<std::string> liste);
	Lecteur();

private:
	std::string _id;
	std::string _nom;
	std::string _prenom;
	std::vector<std::string> _liste;

	
};
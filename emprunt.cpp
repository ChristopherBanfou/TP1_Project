#include "emprunt.h"
#include "iostream"
#include "Livre.h"
#include "Lecteur.h"
#include "date.h"

Emprunt::Emprunt(Date date, Livre& Livre, Lecteur& Lecteur) : _date(date), _ISBN(Livre.get_ISBN()), _id(Lecteur.get_id()){
    Livre.update_liste(Lecteur.get_id());
<<<<<<< HEAD
    Livre.update_status(false);
    if (Livre.get_status()){
        std::cout << "Livre non disponible \n"; 
    }
=======
    Lecteur.update_liste(Livre.get_ISBN());
>>>>>>> a0d17effd5566b36559247ad178ede44bc23ff32
}
std::string Emprunt::getId() const{
    return _id;
}
std::string Emprunt::getISBN() const{
    return _ISBN;
}
void Emprunt::uploadId(std::string id){
    _id = id;
}
void Emprunt::uploadISBN(std::string ISBN){
    _ISBN = ISBN;
}
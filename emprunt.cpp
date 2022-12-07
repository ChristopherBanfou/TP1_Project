#include "emprunt.h"
#include "iostream"
#include "Livre.h"
#include "Lecteur.h"
#include "date.h"

Emprunt::Emprunt(Date date, Livre Livre, Lecteur Lecteur) : _date(date), _ISBN(Livre.get_ISBN()), _id(Lecteur.get_id()){
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
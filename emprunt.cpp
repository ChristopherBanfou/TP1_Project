#include "emprunt.h"
#include "iostream"
#include "Livre.h"
#include "Lecteur.h"
#include "date.h"
#include "assert.h"

Emprunt::Emprunt(Date date, Livre& Livre, Lecteur& Lecteur) : _date(date), _ISBN(Livre.get_ISBN()), _id(Lecteur.get_id()){
    Livre.update_liste(Lecteur.get_id());
    Livre.update_status(false);
    bool status = Livre.get_status();
    Lecteur.update_liste(Livre.get_ISBN());
    assert(status && "Livre indisponible");
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
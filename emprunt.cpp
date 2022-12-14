#include "emprunt.h"
#include "iostream"
#include "Livre.h"
#include "Lecteur.h"
#include "date.h"
#include "assert.h"

Emprunt::Emprunt(Date date, Livre& Livre, Lecteur& Lecteur) : _date(date), _ISBN(Livre.get_ISBN()), _id(Lecteur.get_id()){
    bool status = Livre.get_status();
    assert(status && "Livre indisponible");
    Livre.update_liste(Lecteur.get_id());
    Livre.update_status(false);
    Lecteur.update_liste(Livre.get_ISBN());
}
std::string Emprunt::get_id() const{
    return _id;
}
std::string Emprunt::get_ISBN() const{
    return _ISBN;
}
void Emprunt::uploadId(std::string id){
    _id = id;
}
void Emprunt::uploadISBN(std::string ISBN){
    _ISBN = ISBN;
}
Date Emprunt::get_Date() const{
    return _date;
}
void Emprunt::updateDate(Date d){
    _date = d;
}
std::ostream& operator << (std::ostream& os, Emprunt& e){
    os << "Date d'emprunt : " << e.get_Date() << "\n ISBN : " << e.get_ISBN() << "\n id du Lecteur : " << e.get_id();
}
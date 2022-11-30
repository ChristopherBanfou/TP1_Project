#include "emprunt.h"
#include "iostream"

Emprunt::Emprunt(Date date, std::string ISBN, std::string id) : _date(date), _ISBN(ISBN), _id(id){

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
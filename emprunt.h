#pragma once
#include "date.h"
#include <iostream>
#include "Livre.h"
#include "Lecteur.h"
class Emprunt{
    private:
    Date _date;
    std::string _ISBN;
    std::string _id;
    public:
    Emprunt(Date date, Livre& Livre, Lecteur Lecteur);
    std::string getId() const;
    std::string getISBN() const;
    void uploadId(std::string id);
    void uploadISBN(std::string ISBN);  
};
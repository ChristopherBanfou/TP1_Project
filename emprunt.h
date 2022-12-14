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
    Emprunt(Date date, Livre& Livre, Lecteur& Lecteur);
    std::string get_id() const;
    std::string get_ISBN() const;
    Date get_Date() const{}
    void updateDate(Date d){};
    void uploadId(std::string id);
    void uploadISBN(std::string ISBN);  
};
std::ostream& operator << (std::ostream& os, Emprunt& e);
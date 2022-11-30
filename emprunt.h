#include "date.h"
#include <iostream>
class Emprunt{
    private:
    Date _date;
    std::string _ISBN;
    std::string _id;
    public:
    Emprunt(Date date, std::string ISBN, std::string id);
    std::string getId() const;
    std::string getISBN() const;
    std::string uploadId();
    
    
};
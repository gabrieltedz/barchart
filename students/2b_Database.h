#ifndef _2B_DATABASE_H
#define _2B_DATABASE_H
#include <fstream>
#include "3b_Barchart.h"

class Database 
{
private:
    std::vector<Barchart> barcharts; //(a vector containing all instances of barcharts)

public:
    // n_category (increases if a new category is found)
    std::string main_title;
    std::string source;
    std::string label;

    //void data_read();

};

#endif
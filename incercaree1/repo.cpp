#include "repo.h"
#include "consummonth.h"
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <iostream>

repo::repo()
{
    this->data.push_back(ConsumMonth("Ianuarie"));
    this->data.push_back(ConsumMonth("Februarie"));
    this->data.push_back(ConsumMonth("Martie"));
    this->data.push_back(ConsumMonth("Aprilie"));
    this->data.push_back(ConsumMonth("Mai"));
    this->data.push_back(ConsumMonth("Iunie"));
    this->data.push_back(ConsumMonth("Iulie"));
    this->data.push_back(ConsumMonth("August"));
    this->data.push_back(ConsumMonth("Septembrie"));
    this->data.push_back(ConsumMonth("Octombrie"));
    this->data.push_back(ConsumMonth("Noiembrie"));
    this->data.push_back(ConsumMonth("Decembrie"));
}

void repo::appendToFile(ConsumMonth temp) {
    std::ofstream repoFile;

    repoFile.open("D:/qt/incercaree1/an2019.txt", ios_base::app);
    repoFile << temp.getMonth() << " " << temp.getTotal() << endl;
    repoFile.close();
}

void repo::readFromFile() {
    ifstream infile("D:/qt/incercaree1/an2019.txt");
    string month;
    float price;
    while (infile >> month >> price)
    {
        for(int i=0;i<data.size();i++)
            if(data[i].getMonth() == month)
                this->data[i].setTotal(price);
    }
    infile.close();
    remove( "D:/qt/incercaree1/an2019.txt" );
}

std::vector <ConsumMonth> repo::get_data() const {
    return this->data;
}

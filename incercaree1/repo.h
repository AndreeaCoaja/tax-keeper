#ifndef REPO_H
#define REPO_H
#include"consummonth.h"
#include<string>
using namespace std;

class repo
{

public:
    std::vector<ConsumMonth> data;

    repo();
    void appendToFile(ConsumMonth temp);
    void readFromFile();
    std::vector <ConsumMonth> get_data() const;

};

#endif // REPO_H

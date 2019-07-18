#ifndef CONSUMMONTH_H
#define CONSUMMONTH_H
#include <vector>
#include <string>

using namespace std;

class ConsumMonth
{
private:
   float totalMonth;
   std::string month;
public:
    ConsumMonth(string, float t=0);
    void add(float price);
    string getMonth();
    float getTotal();
    void setTotal(float);
};

#endif // CONSUMMONTH_H

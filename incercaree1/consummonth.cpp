#include "consummonth.h"

ConsumMonth::ConsumMonth(string m, float t)
{
    this->totalMonth= t;
    this->month=m;
}

void ConsumMonth::add(float price) {
    this->totalMonth+=price;
}

float ConsumMonth::getTotal() {
    return this->totalMonth;
}

void ConsumMonth::setTotal(float t) {
    this->totalMonth=t;
}

string ConsumMonth::getMonth() {
    return this->month;
}

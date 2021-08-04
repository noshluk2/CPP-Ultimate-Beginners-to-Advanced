#include "billing.h"

#include<iostream>

billing::billing(int select){
     billing::total_cost=select;
}

int get_total_cost(){
     return billing::total_cost;
}

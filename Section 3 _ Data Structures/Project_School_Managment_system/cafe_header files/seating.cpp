#include "seating.h"

seating::seating(int customer_entered){
    if(customer_entered > seating::available_seats()){
        seating::no_more_space=true;

    }else {
        seating::occupied_seats= seating::occupied_seats + customer_entered;
    }
}


int seating::get_seats(){
    return seating::total_seats;
}
int seating::available_seats(){
    return seating::total_seats - seating::occupied_seats;
}

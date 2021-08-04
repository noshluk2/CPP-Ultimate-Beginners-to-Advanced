#pragma once

class seating{
public:
    seating(int customer_entered);
    int get_seats();
    int available_seats();
    bool no_more_space=false;
private:
    int total_seats = 50;
    int occupied_seats=0;
    
};
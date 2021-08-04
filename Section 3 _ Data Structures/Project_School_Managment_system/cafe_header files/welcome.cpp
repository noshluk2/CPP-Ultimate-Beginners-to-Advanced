#include "welcome.h"
#include <time.h>
#include<iostream>


welcome::welcome(){
    std::cout<<"\nWelcome to the : \n"<<std::endl;
    std::cout<<" ________________________________"<<std::endl;
    std::cout<<"|  *      *      ------  ------- |"<<std::endl;
    std::cout<<"| *      * *     |       |       | "<<std::endl;
    std::cout<<"|*      *---*    |----   ------- |"<<std::endl;
    std::cout<<"| *    *     *   |       |       |"<<std::endl;
    std::cout<<"|  *  *       *  |       ------- |"<<std::endl;
    std::cout<<"|________________________________|\n\n"<<std::endl;
    

}
void welcome::set_time(){
    // setting entering time in hours while customers enter the cafe
    entering_time=13; // just for understanding hardcoding 

}
int welcome::get_time(){
    //returns the private varibles
    time_t t = time(NULL);
    struct tm *tmp = gmtime(&t);
    entering_time=tmp->tm_hour;
    return welcome::entering_time;
}
welcome::welcome(int current_hours){
    if (6<=current_hours<12){
    std::cout<<"Good Morning !"<<std::endl;
    }else if (12<=current_hours<18){
    std::cout<<"Good Afternoon !"<<std::endl;
    }else if(18<=current_hours<21){
    std::cout<<"Good Evening !"<<std::endl;
    }else if(21<=current_hours<6){
    std::cout<<"Good Night !"<<std::endl;
    }

}


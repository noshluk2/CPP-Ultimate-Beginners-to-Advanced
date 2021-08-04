#include "welcome.h"
#include "seating.h"
#include "order.h"
#include<iostream>
int number_of_people;int selected=0;
std::string menu_array[]={"Fried Egg with paratha","halwa Puri","Biryani","Chicken Qorma",
    "Dumnba karahi","Beef Karahi ","Club Sandwich","chicken Patie"};
int price[]={200,300,100,200,400,500,654,343};
int main(){
    welcome customer_enter(customer_enter.get_time());
    std::cout<<"\nHow many people Sir ?\n"<<std::endl;
    std::cin>>number_of_people;
    seating customer(number_of_people);
    
    if(customer.no_more_space){
    std::cout<<"Sorry house is Full ! kindly check after sometime !"<<std::endl;
    }else{
        std::cout<<"Have a Seat there "<<std::endl;
    }

    order menu;
    for(int i =0;i<8;i++){
        std::cout<<i+1<<" - "<<menu_array[i]<<std::endl;
    }std::cout<<"Your Selection : ";
    std::cin>>selected;
    menu.set_selection(selected);


    std::cout<<"\n\nKindly wait for the food to be served "<<std::endl;
    std::cout<<"\n\n\n------Assuming food is finished-------- \n\n\n"<<std::endl;
    std::cout<<"You Bougth : "<<menu_array[selected]<< " = "<<price[selected]<<"rupees"<<std::endl;
    
    


    return 0;
}
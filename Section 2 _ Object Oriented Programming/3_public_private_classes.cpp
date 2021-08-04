/*
    - Purpose : 
             Keyword Class
    - Understand :
            Access specifiers in classes

   Written by Muhammad Luqman
    MIT License
*/


#include <iostream>


class hotel {  
public:
  // Constructors
  hotel(std::string name,int rooms,int waiters ,int car_slots, bool open){
    hotel_name=name;
    num_of_rooms=rooms;
    num_of_rooms=waiters;
    status=open;
    car_slots_rem=car_slots;
  }

  
  int num_of_rooms,car_slots_rem,num_of_waiters;
  bool status;
    int avaiable_parking(){
      return car_slots_rem;
    }
    
    int avaiable_rooms(){
      return num_of_rooms;
    }
    std::string get_hotel_name(){
      return hotel_name;
    }
    void hotel_name_changer(std::string change_name){
      set_name(change_name);
    }
  private:
    std::string hotel_name;

    void set_name(std::string name){
      hotel_name=name;
    }
  

};


int main() {


  hotel hotel_1("Raja_G_hotel",20,200,40,true);
  std::cout<<hotel_1.get_hotel_name()<<std::endl;
  hotel_1.hotel_name_changer("Luqman_a_G_hotel");
  std::cout<<hotel_1.get_hotel_name();
  
  return 0;
}
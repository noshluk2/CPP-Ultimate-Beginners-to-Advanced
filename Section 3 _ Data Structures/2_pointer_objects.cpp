/*
    - Purpose : 
             Burgers with pointer
    - Understand :
            Pointers to class objects
            Updating with '->' arrow

   Written by Muhammad Luqman
    MIT License
*/



/*Explaination
  When you want to address varibles/functions of a 
  class/struct you use member of pointer  ' -> ' */

#include <iostream>
using namespace std;

struct Burger {
  int  layers;
  bool cheese;
  bool beef;
  bool chicken;
  bool salad;
  bool onions;
};

int main() {
  Burger beef_burger;
  Burger chicken_burger;

  chicken_burger.layers=3;
  chicken_burger.chicken=true; 
  chicken_burger.onions =true;
  chicken_burger.salad  =true;
  chicken_burger.cheese =false;
  chicken_burger.beef   =false;



  Burger *beef_burger_pointer = &beef_burger;  // through pointer
  beef_burger_pointer->layers=4;
  beef_burger_pointer->beef  =true;
  beef_burger_pointer->onions=true;
  beef_burger_pointer->salad =true;
  beef_burger_pointer->cheese=true;
  beef_burger_pointer->chicken=false;

  cout<<"\nChicken Burger layers "<<chicken_burger.layers<<endl;
  cout<<"Beef Burger layers "<<beef_burger_pointer->layers<<endl;
  
  beef_burger_pointer = &chicken_burger;
  beef_burger_pointer->layers = 4; 
  cout<<"Chicken Burger layers "<<chicken_burger.layers<<endl;
  }


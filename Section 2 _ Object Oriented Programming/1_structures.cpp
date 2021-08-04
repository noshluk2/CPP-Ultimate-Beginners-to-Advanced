/*
    - Purpose : 
             Writing first Structure/Class
    - Understand :
            Structs

   Written by Muhammad Luqman
    MIT License
*/

//EXPLAINATION:
  // Sort of array of elements with different data types. 

#include<iostream>
//Defined a structure with struct keyword
//-------------------------------------------------------
struct Person {
  std::string name;
  bool        young;
  int         age;
  float       hieght;
  
};

int main() {

  //1 - using our Structure
  //-------------------------------------------------------

  Person person_1;
  person_1.name = "Luqman";
  person_1.hieght= 5.76;
  person_1.age=25;
  person_1.young=true;

  // std::cout<<person_1.name<<" is a robotics Instructor and his age is "<<person_1.age<<std::endl;
  // std::cout<<person_1.hieght<<" is his total length\n";
  // std::cout << ((person_1.young) ? "young":"Old") ;

  //-------------------------------------------------------
//  creating more members
  Person person_2{"Zaheer",false,26,6.5};
  std::cout<<person_2.name<<" is a robotics Instructor and his age is "<<person_2.age<<std::endl;
  std::cout<<person_2.hieght<<" is his total length\n";
  std::cout << ((person_2.young) ? "young":"Old") ;

  return 0;
   }



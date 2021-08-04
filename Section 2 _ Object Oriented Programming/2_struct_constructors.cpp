/*
    - Purpose : 
             Exploring Structures with Constructors
    - Understand :
            Constructors
            Multi-Constructor

   Written by Muhammad Luqman
    MIT License
*/

#include <iostream>
struct Result {
  int subjects;
  std::string name;
  bool fail;


  Result(){
    std::cout<<"No data Found"<<std::endl;
  }
  Result(int marks){
    std::cout<<"Your marks are" << marks<<std::endl;
  }
  Result(char Grade){
    std::cout<<"Your Grade is "<<Grade<<std::endl;
  }
};

int main() {
  
Result student_1{};
Result student_2(90);
Result student_3('F');

return 0;
}
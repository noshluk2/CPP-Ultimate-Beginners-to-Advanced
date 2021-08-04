
/*
    - Purpose : 
            Varibles Initiallizing
            Arrays Undestanding
    - Understand :
            Data Type
            Constant/Static  
            print format specifier
            
    Written by Muhammad Luqman
    MIT License
*/


#include <cstdio>
using namespace std;

// a data type is used to describe a variable/constant.
//http://www.cplusplus.com/reference/cstdio/printf/
int main(){
    // 1 - simple definations
    //-------------------------------------------------------------------------
    // bool    boolean=true;
    // int     a_integer=4; 
    // double  a_double=12.123;
    // float   a_float=10.2;
    // char    character='L';    
    // const int pi=3.14;const double gravity =9.8;

    
    // printf("My name is %c , my age is  %d ,My hieght is %f" 
    // , character,a_integer,a_float);
    
    //-------------------------------------------------------------------------















    //2 - array definations

    //-------------------------------------------------------------------------
    // int     car_numbers[]={ 1, 2, 3 };
    // float   car_heights[]={ 1.222, 2.0, 8.26 };
    // char    car_number_plate[] = "LDC 2830";
    // printf("\nI have three Cars\nMy Car is %f up and its %d of my collection with plate %s\n", 
    // car_heights[2],car_numbers[1],car_number_plate); 
    //-------------------------------------------------------------------------
    










    




    //3 - different ways for initialization

    //-------------------------------------------------------------------------
  
    // always give usefull names not like a,b,c
    int a_variable_ = 10;
    int a_variable__ = { 10 };
    int a_variable___{ 10 };
    int a_variable____(10);

    int empty_array[5]{};  // 5 integer elements in array currently all 0
    int partially_array[]{ 8, 9, 10 }; // length is equal to values we provide
    int full_array[5]{ 1, 2, 3 };  // Given length is bigger than our values so remaining are zero
    int just_initiallized_array[5];  // values are not initiallized
    
    //-------------------------------------------------------------------------


return 0;


}






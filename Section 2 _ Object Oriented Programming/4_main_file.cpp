/*
    - Purpose : 
             header File Linking
    - Understand :
            Execute multiple cpp and header files

   Written by Muhammad Luqman
    MIT License
*/

// - you need to execute with the below command

// g++ -o output.exe 1_main.cpp 2_header.cpp
// ./output.exe

#include "4_headers.h"
int main(){

calculator cal_obj;
cal_obj.multiplication(10,20);
cal_obj.get_result();
return 0;
}



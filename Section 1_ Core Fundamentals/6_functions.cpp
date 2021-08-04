/*
    - Purpose : 
            Functions 
    - Understand :
            Void functions
            Returning Functions
            
    Written by Muhammad Luqman
    MIT License
*/
#include <iostream>
void print();
void sqauring(int a);
int sum_result(int first_var,int second_var);
int result_holder;
int a=10;
void function_1();
void function_2();
void function_3();

int main() {
    function_1();
    function_2();
    function_3();
    // result_holder= sum_result(10,20);
    // std::cout<<"Addition results is : "<<result_holder<<std::endl;
    // sqauring(result_holder);
    return 0;
}


void function_1(){
    
    std::cout<<a<<std::endl;
}
void function_2(){
    
    std::cout<<a<<std::endl;

}
void function_3(){
    
    std::cout<<a<<std::endl;
}

void print(){
sqauring(9);
}

void sqauring(int a){
    // /scope  a 
    std::cout<<"Squaring Result = "<<a*a<<std::endl;
}

// Returning functions

int sum_result(int first_var,int second_var){
    return (first_var+second_var);
}



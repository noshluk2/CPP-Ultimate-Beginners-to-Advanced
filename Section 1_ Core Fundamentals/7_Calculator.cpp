/*
    - Purpose : 
            Making a Calculator 
    - Understand :
            Funtions
            User inputs passing in functions
            
    Written by Muhammad Luqman
    MIT License
*/
#include <cstdio>
#include <iostream>


void addition       (int number_1,int number_2);
void subtraction    (int number_1,int number_2);
void multiplication (int number_1,int number_2);
void division       (int number_1,int number_2);

int main() {
    int number_a,number_b,operation;
    while (operation!=5)
    {
       
    
    std::cout<<"Enter First Number "<<std::endl;
    std::cin>>number_a;
    std::cout<<"Enter Second Number "<<std::endl;
    std::cin>>number_b;
    
    std::cout<<"Enter any requred operation number \n";
    std::cout<<"1: Addition\n2: Subtraction\n4: Multiplication\n4: Division"<<std::endl;
    std::cin>>operation; 
   
   
    switch (operation)
    {
    case 1:
        addition(number_a,number_b);
        break;
    case 2:
        subtraction(number_a,number_b);
        break;
    case 3:
        multiplication(number_a,number_b);
        break;
    case 4:
        division(number_a,number_b);
        break;
    default:
        std::cout<<"Wrong Input";
        break;
    
}
    }
}




void addition(int number_1,int number_2){
    printf("Your Result is : %d\n",number_1+number_2);
}
void subtraction(int number_1,int number_2){
    printf("Your Result is : %d\n",number_1-number_2);
}
void multiplication(int number_1,int number_2){
    printf("Your Result is : %d\n",number_1*number_2);
}
void division(int number_1,int number_2){
    printf("Your Result is : %d \n",number_1/number_2);
}
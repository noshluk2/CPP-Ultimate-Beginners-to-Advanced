/*
    - Purpose : 
             Pointers
    - Understand :
            Pointers
            Pointing to arrays 
            Chain of Pointers

   Written by Muhammad Luqman
    MIT License
*/
// add pointers and refferences https://www.youtube.com/watch?v=sxHng1iufQE&ab_channel=PaulProgramming

/*
//Explaination:
- Pointers are used to refer memory directory through address
- You can use pointers to access varible through address



*/

#include <cstdio>
#include<iostream>
int main() {
// 1- Saving address in a pointer and updating values
//-----------------------------------------------------------------------

int number_a=20 ,number_b=10;
int *pointer_for_variable = & number_a;
// std::cout<<"Address of A "<<(& number_a)<<std::endl;
// std::cout<<"Address of B "<<(& number_b)<<std::endl;
// std::cout<<"Address of Pointer "<<(& pointer_for_variable)<<std::endl;

// *pointer_for_variable = 50; 
// std::cout<<"A =  "<<(number_a)<<std::endl;

// pointer_for_variable = & number_b;
// *pointer_for_variable = 60;
// std::cout<<"B =  "<<(number_b)<<std::endl;










  

//-----------------------------------------------------------------------


// 2- Accesing Array's elements through Addresses
//-----------------------------------------------------------------------
  // int array[]={0,1,2,3,4};
  // int *pointer = &array[0];
  // std::cout<<"\nPrinting Addresses\n";

  // // for (int looping_variable=0;looping_variable<5;looping_variable++){
  // //   std::cout<<"\n"<<pointer++;
  // // }
  
  // std::cout<<"\n\nPrinting Values\n";
  // pointer=&array[0]; // Why i have to do this and this time no *
  // for (int looping_variable=0;looping_variable<5;looping_variable++){
  //   *pointer=*pointer++;
  //   std::cout<<*pointer++<<std::endl;
  // }



//-----------------------------------------------------------------------





// 3- Chain of Pointers
//-----------------------------------------------------------------------

  int number_1=100;
  int *ptr=&number_1;
  int **ptr_ptr=&ptr;
  int ***ptr_ptr_ptr=&ptr_ptr;

  std::cout<<number_1<<std::endl;
  std::cout<<*ptr<<std::endl;
  std::cout<<**ptr_ptr<<std::endl;
  std::cout<<***ptr_ptr_ptr<<std::endl;
  
  ***ptr_ptr_ptr=20;

  std::cout<<number_1<<std::endl;
  std::cout<<*ptr<<std::endl;
  std::cout<<**ptr_ptr<<std::endl;
  std::cout<<***ptr_ptr_ptr<<std::endl;


//-----------------------------------------------------------------------

  

  return 0;
}




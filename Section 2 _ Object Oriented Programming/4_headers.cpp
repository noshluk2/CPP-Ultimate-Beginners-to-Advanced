#include "4_headers.h"
#include<iostream>

void calculator::get_result(){

	std::cout<<result;
}
void calculator::addition (int f_num,int s_num){
	calculator::result = f_num+s_num;
}
void calculator::division (int f_num,int s_num){
	calculator::result = f_num/s_num;
}
void calculator::multiplication (int f_num,int s_num){
	calculator::result = f_num*s_num;
}
void calculator::subtraction (int f_num,int s_num){
	calculator::result = f_num-s_num;
}
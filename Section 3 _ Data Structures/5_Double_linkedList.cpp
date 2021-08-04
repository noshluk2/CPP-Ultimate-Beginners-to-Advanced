
/*
    - Purpose : 
             Double Linked List
    - Understand :
            Linked List
            Updating with '->' arrow

   Written by Muhammad Luqman
    MIT License
*/
// Adding alot of data for linked lists
// adding pass by pointer concept in traversing forward and reverse
// 

#include <iostream>
#include "5_Double_linkedList.h"
 void traverse(subject_node *ptr,char dir);


int main(){
///  creating students as structure pointers of Single Linked Lists
struct attendence_node* student_1 = new attendence_node;
struct attendence_node* student_2 = new attendence_node;
struct attendence_node* student_3 = new attendence_node;
struct attendence_node* student_4 = new attendence_node;
// Filling values in objects of students for attendence

student_1->student_name="luqman";
student_1->roll_number=26;
student_1->next_student=student_2;

student_2->student_name="Touseef";
student_2->roll_number=28;
student_2->next_student=student_3;

student_3->student_name="Ahmed";
student_3->roll_number=2;
student_3->next_student=student_4;

student_4->student_name="Zaheer";
student_4->roll_number=52;
student_4->next_student=NULL;

// Creating Doubly Linked List structure pointers
struct subject_node* math_s1 = new subject_node;
struct subject_node* math_s2 = new subject_node;
struct subject_node* math_s3 = new subject_node;
struct subject_node* math_s4 = new subject_node;

struct subject_node* physics_s1 = new subject_node;
struct subject_node* physics_s2 = new subject_node;
struct subject_node* physics_s3 = new subject_node;
struct subject_node* physics_s4 = new subject_node;


// Mathematics doubly linked list
math_s1->subject_name="Mathematics";
math_s1->lectures_taken = "1010";
math_s1->previous_marks = 70;
math_s1->next_student   = math_s2;
math_s1->next_subject   = physics_s1;
math_s1->previous_student   = NULL;

math_s2->subject_name="Mathematics";
math_s2->lectures_taken = "1111";
math_s2->previous_marks = 90;
math_s2->next_student   = math_s3;
math_s2->next_subject   = physics_s2;
math_s2->previous_student   = math_s1;

math_s3->subject_name="Mathematics";
math_s3->lectures_taken = "1010";
math_s3->previous_marks = 80;
math_s3->next_student   = math_s4;
math_s3->next_subject   = physics_s3;
math_s3->previous_student   = math_s2;

math_s4->subject_name="Mathematics";
math_s4->lectures_taken = "0010";
math_s4->previous_marks = 40;
math_s4->next_student   = NULL;
math_s4->next_subject   = physics_s4;
math_s4->previous_student   = math_s3;

// physics doubly linked list
physics_s1->subject_name="Physics";
physics_s1->lectures_taken = "1001";
physics_s1->previous_marks = 60;
physics_s1->next_student   = physics_s2;
physics_s1->next_subject   = NULL;
physics_s1->previous_student   = NULL;

physics_s2->subject_name="Physics";
physics_s2->lectures_taken = "1111";
physics_s2->previous_marks = 95;
physics_s2->next_student   = physics_s3;
physics_s2->next_subject   = NULL;
physics_s2->previous_student   = physics_s1;

physics_s3->subject_name="Physics";
physics_s3->lectures_taken = "1011";
physics_s3->previous_marks = 85;
physics_s3->next_student   = physics_s4;
physics_s3->next_subject   = NULL;
physics_s3->previous_student   = physics_s2;

physics_s4->subject_name="Physics";
physics_s4->lectures_taken = "1110";
physics_s4->previous_marks = 70;
physics_s4->next_student   = NULL;
physics_s4->next_subject   = NULL;
physics_s4->previous_student   = physics_s3;


subject_node *traverser_f=new subject_node;
subject_node *traverser_b=new subject_node;

traverser_f->next_student=math_s1;
traverser_b->previous_student=math_s4;

traverser_f->next_subject=math_s1;
traverser_f = traverser_f->next_subject;


traverse(traverser_f,'f');

cout<<"-----------------\n";
traverse(traverser_b,'b');


}



// to traverse a linked list and print it
void traverse(subject_node *ptr,char dir){
    if(dir == 'f'){
    while( ptr->next_student != NULL){
        ptr=ptr->next_student;
        cout<<(ptr->lectures_taken)<<endl;
    }   
     }
    else{
        while( ptr->previous_student != NULL){
        ptr=ptr->previous_student;
        cout<<(ptr->lectures_taken)<<endl;
    } 
    }


}


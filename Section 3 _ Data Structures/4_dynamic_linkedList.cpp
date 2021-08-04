
/*
    - Purpose : 
             data Structure Linked List
    - Understand :
            Linked List
            Updating with '->' arrow

   Written by Muhammad Luqman
    MIT License
*/
// Dynamic Means we are going to add nodes in runtime
// Delete , add  nodes with helper functions

#include <iostream>
#include "4_linkedLists.h"

void traverse(subject_node *ptr,char dir);



int main(){
///  creating students as structure pointers of Single Linked Lists
int user_input,roll_num,math_prev_marks,physics_prev_marks;
string name_in,math_lectures_in,physics_lectures_in;
char dir;cout<<"\n";
linkedLists obj;


while(1){
cout<<"\n\n1- Add student || 2- Add Subjects || 3-Display Students || 4- Display Subjects || 5- Display ALL "<<"\nYour Choice :";
cin>>user_input;

switch (user_input)
{
    
case 1: // adding students
    cout<<"Enter Name for the Student to add !"<<endl;
    cin>>name_in;
    cout<<"Enter Roll Number for the Student to add !"<<endl;
    cin>>roll_num;
    
    obj.add_student(name_in,roll_num);
    cout<<"\n\tStudent Added\n"<<endl;
    break;
case 2:// adding subjects
    // First we add for Maths
    cout<<"\n\tMath Data Input\n "<<endl;
    cout<<"Enter Total Lectures taken in 0 or 1"<<endl;
    cin>>math_lectures_in;
    cout<<"Enter Previous Marks in Maths Subject Exam"<<endl;
    cin>>math_prev_marks;
    // Making Entries for Physics
    cout<<"\n\tPhysics Data Input\n "<<endl;
    cout<<"Enter Total Lectures taken in 0 or 1"<<endl;
    cin>>physics_lectures_in;
    cout<<"Enter Previous Marks in Physics Subject Exam"<<endl;
    cin>>physics_prev_marks;
    // sending information of both subjects to create linked list
    obj.add_subject(math_lectures_in,physics_lectures_in,math_prev_marks,physics_prev_marks);
    cout<<"\n\tSubject Added\n"<<endl;
    
    
    
    break;
case 3: // for displaying single Linked List
     cout<<"\n";
     obj.traverse_attendence(obj.get_att_traverser());
     cout<<"\n";
    break;
case 4:
    // cin>>dir;
    obj.traverse_subject(obj.get_math_head());
    cout<<"\n";
    obj.traverse_subject(obj.get_physics_head());
    cout<<"\n";
    break;

case 5:
    cout<<"\n\n";
    obj.traverse_attendence(obj.get_att_traverser());
    cout<<"\n";

    obj.traverse_subject(obj.get_math_head());
    cout<<"\n";
    obj.traverse_subject(obj.get_physics_head());
    cout<<"\n";
    break;
    

case 6:
cout<<"Exiting"<<endl;
    break;
}


}


}




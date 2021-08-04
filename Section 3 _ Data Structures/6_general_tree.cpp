
/*
    - Purpose : 
             Data Structure Tree
    - Understand :
            Binary tree
            Nodes pointers

   Written by Muhammad Luqman
    MIT License
*/

#include <iostream>
#include "6_tree.h"
 
int main(){
string title_in="";
int data_in=10, user_input;
int student_count=1,teacher_count=1;
char dir;
cout<<"\n";

tree obj;
    
  obj.set_school_things("The C++ School");
  obj.set_student_block("C++ Students",2);
  obj.set_teacher_block("C++ teachers",2);

while (1)
{
  
  cout<<"\n1- Add student || 2 - Add Teachers  || 3 - Delete a Node || 4 - Display School Stats "<<"\nYour Choice :";
  cin>>user_input;

  switch (user_input)
  {
  case 1: // student adding

      cout<<"Enter Name of Student\n";
      cin>>title_in;
      cout<<"Enter Data of Student\n";
      cin>>data_in;

      if( student_count==1){ 
        obj.node_add_left(obj.get_student_block(),obj.node_creater(title_in,data_in));
        cout<<"\n\nStudent Added \n\n";
      }
      else if(student_count==2){
        obj.node_add_right(obj.get_student_block(),obj.node_creater(title_in,data_in));
        cout<<"\n\nStudent Added \n\n";
      }else{cout<<"Student Registeration Filled ! No more space "<<endl;}

      student_count++;
      


    break;
case 2: // student adding

      cout<<"Enter Name of Teacher\n";
      cin>>title_in;
      cout<<"Enter Pay of Teacher\n";
      cin>>data_in;

      if( teacher_count==1){ 
        obj.node_add_left(obj.get_teacher_block(),obj.node_creater(title_in,data_in));
        cout<<"\n\nTeacher Added \n\n";
      }
      else if(teacher_count==2){
        obj.node_add_right(obj.get_teacher_block(),obj.node_creater(title_in,data_in));
        cout<<"\n\nTeacher Added \n\n";
      }else{cout<<"Teacher Registeration Filled ! No more space "<<endl;}

      teacher_count++;
      


    break;

    case 3: // Node deleting
    cout<<" Detele Node from \tr- right ||l- left "<<endl;
    cin>>dir;

     obj.delete_node(obj.get_student_block(),dir);

    break;
  

  case 4:
    cout<<"\n\n"<<"Your Tree Data Structure is "<<endl;
    cout<<"\t\t\t\t\t"<<obj.get_school_name()<<endl;
    cout<<"\t\t\t\t-----------------------------------"<<endl;
    cout<<"\t\t\t\t |"<<"\t\t\t\t |"<<endl;
    cout<<"\t\t\t\t |"<<"\t\t\t\t |"<<endl;
    cout<<"\t\t\t"<<obj.get_student_block()->title<<"|"<<obj.get_student_block()->data<<"\t    ";
    cout<<"\t\t"<<obj.get_teacher_block()->title<<"|"<<obj.get_teacher_block()->data;
    cout<<"\n\t\t--------------------------------------------------------------"<<endl;
    cout<<"\t\t|"<<"\t\t|\t\t\t|\t\t|\n\t   ";
    obj.print_student('l');cout<<"\t\t";
    obj.print_student('r');
    cout<<"\t\t   ";
    obj.print_teacher('l');cout<<"\t\t";
    obj.print_teacher('r');cout<<"\n\n";
    
    break;
  
  default:
    break;
  }
}


return 0;
}
 

#include <string>
using namespace std;


struct node
{   
   string title;
   int data;
   struct node *left;
   struct node *right;
};
class tree
{
private: /// creating all required head and tails for traversing
   node *root_node,*traverse,*student_block,*teacher_block;
public:
   void set_school_things(string school_name){
      root_node = new node;
      root_node->title = school_name;
      root_node->left  = student_block;
      root_node->right = teacher_block;
   }
   void set_student_block(string title,int data){
      student_block=new node;
      student_block ->title = title;
      student_block ->data  = data;

   }
      void set_teacher_block(string title,int data){
      teacher_block = new node;
      teacher_block ->title = title;
      teacher_block ->data  = data;

   }
   string get_school_name(){
      return root_node->title;
   }
    node *get_root_node(){
         return root_node;
      }
   node *get_student_block(){
         return student_block;
      }
   node *get_teacher_block(){
      return teacher_block;

   }
   

   node *node_creater(string title,int data){
      node *temp_node= new node;
      temp_node->title = title;
      temp_node->data=data;
      return temp_node;
   }
   void print_student(char side){
      traverse=new node;
      traverse=student_block;
      
      if (side == 'r'){
         cout<<traverse->right->title;

      }else if(side == 'l'){
         cout<<traverse->left->title;
      }

   }
   void print_teacher(char side){

      traverse=teacher_block;
      
      if (side == 'r'){
         cout<<traverse->right->title;

      }else if(side == 'l'){
         cout<<traverse->left->title;
      }

   }

 

   
   void node_add_right(node* adding_to, node* add_it_right){
      
      adding_to->right = add_it_right;

   }
    void node_add_left(node* adding_to, node* add_it_left){

      adding_to->left  = add_it_left;

   }
   void delete_node(node* delete_from,char side){
      if (side == 'r'){
         delete_from ->right = NULL;
         
      }else if(side == 'l'){
         delete_from ->left = NULL;
      }
      cout<<"Node Deleted";

   }

};



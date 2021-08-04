 

#include <string>
using namespace std;


struct attendence_node
{  string student_name;
   int roll_number;
   struct attendence_node *next_student;
};

struct subject_node
{  string subject_name;
   string lectures_taken;
   int previous_marks;
   struct subject_node *next_student;
   struct subject_node *next_subject;
};

class linkedLists
{
private: /// creating all required head and tails for traversing
    attendence_node *tail,*head,*attendence_traverse;
    subject_node *tail_math,*tail_physics,*head_math,*head_physics;
public:
    linkedLists() // First ever, when  you call all of these are NULL 
    {
        head = NULL;
        tail = NULL;
        tail_math = NULL;
        tail_physics = NULL;
        head_math = NULL;
        head_physics = NULL;
    }
    attendence_node* get_att_traverser(){
        return attendence_traverse;
    }
    
    subject_node* get_math_head(){
        return head_math;
    }
    subject_node* get_physics_head(){
        return head_physics;
    }

    void add_student(string name,int rollnumber)
    {   // Create a Temp Variable to hold all the use input
        attendence_node *temp = new attendence_node;
        temp->student_name = name;
        temp->roll_number  = rollnumber;

        if(head == NULL){ // condition only for first time
            head = temp;
            tail = temp;
            attendence_traverse->next_student=head;
        }
        else
        {   
            tail->next_student = temp;
            tail = tail->next_student;
            
        }
    }
    void add_subject(string m_lec,string p_lec,int m_prev_m,int p_prev_m)
    {   // Create a Temp Variable to hold all the use input
        subject_node *temp_math    = new subject_node;
        subject_node *temp_physics = new subject_node;
        temp_math->subject_name="Math";
        temp_math->lectures_taken =m_lec;
        temp_math->previous_marks=m_prev_m;

        temp_physics->subject_name="Physics";
        temp_physics->lectures_taken=p_lec;
        temp_physics->previous_marks=p_prev_m;

        if(head_math == NULL){ // first node creation condition
            head_math = temp_math;
            head_physics = temp_physics;

            tail_math= temp_math;
            tail_physics = temp_physics;

        }else { 
            tail_math->next_student = temp_math;
            tail_math=tail_math->next_student; // now on next node
            tail_math->next_subject=temp_physics;

            tail_physics->next_student=temp_physics;
            tail_physics=tail_physics->next_student;
    }
    }
    // to traverse a linked list and print it
    // provide head as an input for taversing
    void traverse_attendence(attendence_node *ptr){
        while( ptr->next_student != NULL){
            ptr=ptr->next_student;
            cout<<"\t\t"<<(ptr->student_name);}
        }

    /// Traversing using Recusrion
    void traverse_subject(subject_node *ptr){
        if(ptr != NULL){
            cout<<ptr->subject_name<<" | "<<ptr->lectures_taken<<" | "<<ptr->previous_marks<<"\t";
            traverse_subject(ptr->next_student);
        }


    }





};


 

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
   struct subject_node *previous_student;
   struct subject_node *next_subject;
};

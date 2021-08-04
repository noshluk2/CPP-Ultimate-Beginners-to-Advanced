#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//For students
struct student
{
 string fname;//for student first name
 string lname;//for student last name
 string Registration;//for Registration No number
 string classes;//for class info
}studentData;//Variable of student type

//For teachers
struct teacher
{
 string fst_name;//first name of teacher
 string lst_name;//last name of teacher
 string qualification;//Qualification of teacher
 string exp;//Experiance of the person
 string subj;//subject whos he/she teach 
 string pay;//Pay of the Teacher
 string cel_no;//Phone number 

}teacherData;//Variable of teacher type

int main()
{

int i=0,j;//for processing usage 
char choice;//for getting choice
string find;//for sorting
string srch;

while(1)//outer loop
{ 
 system("cls");//Clear screen

//Level 1-Display process 
 cout<<"\n\n\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n";
 cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
 cout<<"Enter your choice: "<<endl;
 cout<<"1.Students information"<<endl;
 cout<<"2.Teacher information"<<endl;
 cout<<"3.Exit program"<<endl;
 cin>>choice;

system("cls");//Clear screen


switch(choice)//First switch
{
 
case '1': //Student
 { 
while(1)//inner loop-1
{ 
system("cls");//Clear screen
//Level-2 display
cout<<"\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Create new entry\n";
cout<<"2.Find and display entry\n";
cout<<"3.Jump to main\n";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
 cout<<"Enter First name: ";
 cin>>studentData.fname;
 
 cout<<"Enter Last name: ";
 cin>>studentData.lname;
 
 cout<<"Enter Registration number: ";
 cin>>studentData.Registration;
 
 cout<<"Enter class: ";
 cin>>studentData.classes;
 
 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;
 cout<<"Do you want to enter data: ";
 cout<<"Press Y for Continue and N to Finish:  ";
 cin>>choice;
}
} 
f1.close();
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt"); 

cout<<"Enter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData.fname);

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"First Name: "<<studentData.fname<<endl;
 
 getline(f2,studentData.fname);
 cout<<"Last Name: "<<studentData.lname<<endl;

 getline(f2,studentData.Registration);
 cout<<"Registration number: "<<studentData.Registration<<endl;
 
 getline(f2,studentData.classes);
 cout<<"Class: "<<studentData.classes<<endl<<endl;
}

}

if(notFound == 0){

cout<<"No Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen

}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
continue;//Control pass to 1st loop    
}

case '2'://Teachers biodata
{ 
while(1)//inner loop-2
{ 
system("cls");//Clear screen
//Level-2 Display process
cout<<"\t\t\tTEACHERS INFORMATION AND BIODATA SECTION\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Create new entry\n";
cout<<"2.Find and display\n";
cout<<"3.Jump to main\n";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{ 
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{
 
 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
  cout<<"Enter First name: ";
  cin>>teacherData.fst_name;
  
  cout<<"Enter Last name:: ";
  cin>>teacherData.lst_name;
  
  cout<<"Enter qualification: ";
  cin>>teacherData.qualification;
  
  cout<<"Enter experiance(year): ";
  cin>>teacherData.exp;

  cout<<"Enter Subject whos teach: ";
  cin>>teacherData.subj;

  cout<<"Enter pay: ";
  cin>>teacherData.pay;
  
  cout<<"Enter Phone Number: ";
  cin>>teacherData.cel_no;
  
  t1<<teacherData.fst_name<<endl<<teacherData.lst_name<<endl 
   <<teacherData.qualification<<endl<<teacherData.exp<<endl
   <<teacherData.subj<<endl<<teacherData.pay<<endl<<teacherData.cel_no<<endl;
  cout<<"Do you want to enter data: ";
  cin>>choice;
 }//if
}//for loop
//for finding through name 
system("cls");



t1.close();
}//case 1

continue;//Control pass to inner loop-2

case '2'://Display data
{ 
ifstream t2("teacher.txt"); 

cout<<"Enter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{ 
 
 getline(t2,teacherData.fst_name);
 
 if(teacherData.fst_name==find)
 {
  notFound = 1;
  cout<<"First name: "<<teacherData.fst_name<<endl;
  
  getline(t2,teacherData.lst_name);
  cout<<"Last name: "<<teacherData.lst_name<<endl;
  
  getline(t2,teacherData.qualification);
  cout<<"Qualification: "<<teacherData.qualification<<endl;
  
  getline(t2,teacherData.exp);
  cout<<"Experience: "<<teacherData.exp<<endl;

  getline(t2,teacherData.subj);
  cout<<"Subject whos teach: "<<teacherData.subj<<endl;

  getline(t2,teacherData.pay);
  cout<<"pay: "<<teacherData.pay<<endl;

  getline(t2,teacherData.cel_no);
  cout<<"Phone Number: "<<teacherData.cel_no<<endl;
  
 }//if
 
}//for loop
t2.close();
if(notFound == 0){

 cout<<"No Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen
}//case 2

continue;//Control pass to inner loop-2

case '3'://Jump to main 
{
break;//inner switch
}//case 3

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2


case '3':
{
break;//outer case 3
}//outer case 3
}   
break;//outer loop
}
}


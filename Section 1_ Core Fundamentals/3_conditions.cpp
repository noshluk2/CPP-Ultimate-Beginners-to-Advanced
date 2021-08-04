
/*
    - Purpose : 
            Conditions implement
            User Input 
    - Understand :
            User Input
            If,Else
            Switch
    Written by Muhammad Luqman
    MIT License
*/

#include <iostream>
using namespace std;
int main(){

    int age =  80;

    //1 - Implementing if else condition
    //-------------------------------------------------------------------------
    // if (age >= 80){
    //     cout<<"Person is too old\n";
    // }else {
    //     cout<<"Not yet Old\n";
    // }
    //-------------------------------------------------------------------------










        //2 - If else if, elseif, else ,else
    //-------------------------------------------------------------------------
    // to take input from vscode you need to do a change in settings
    //- file->preferences->settings->type('run code')->scroll download -> check code runner run in terminal
    // cout<<"Enter your age\n";
    // cin>>age; //25
    // if(age > 80){
    //     cout<<"You are too Old\n";
    // }else if (age > 50 ){
    //     cout<<"You are going to be  Old"<<endl;
    // }else if (age > 30 ){
    //     cout<<"You are Young"<<endl;
    // }else if (age > 10 ){
    //     cout<<"You are Too Young"<<endl;
    // }else{
    //     cout<<"Cannot say anything about you";
    // }
    
  









    
    //3 - Switch Statment
    //-------------------------------------------------------------------------
    cout<<"Where to Drive the Car"<<endl;
    char bluetooth_input;
    cin>>bluetooth_input;

    switch(bluetooth_input) { // cannot give conditions just exact values
        case 'f':
        cout<<"Moving Forward "<<endl;
        
        break;

        case 'b':
        cout<<"Going Backward"<<endl;
        break;

        case 'r':
        cout<<"Taking Right Turn "<<endl;
        break;

        case 'l':
        cout<<"Taking Left Turn"<<endl;
        break;

        case 's':
        cout<<"Stopping The Robot "<<endl;
        break;

        default:
        cout<<"Wrong Input -> Shutting down the Robot"<<endl;
}
    //-------------------------------------------------------------------------






}
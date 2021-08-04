
/*
    - Purpose : 
            Going Above 1-Dimension Arrays
    - Understand :
            creating 2d arrays
            Looping through 2D arrays
            
    Written by Zaheer Ahmed
    MIT License
*/

#include <iostream>
using namespace std;

int main()
{

//1-  Creation of a 2D array (A matrix)
//-------------------------------------------------------------------------
    
int a[3][3] = {{1,2,3},  // 1st row
               {4,5,6},  // 2nd row
               {7,8,9}}; // 3rd row

//-------------------------------------------------------------------------









//-------------------------------------------------------------------------
// Printing The Arrays
//-------------------------------------------------------------------------

for (int i=0; i<3; i++)
    {
    for (int j=0; j<3; j++)
        {
        cout << a[i][j] << " ";
        }
    cout << endl;
    }

//-------------------------------------------------------------------------













//1 - User Inputs Size of 2D array
// -------------------------------------------------------------------------
int rows, columns;
cout << "Enter number of rows\n";
cout<<"Your Choice : ";cin >> rows;
cout << "Enter number of columns\n";
cout<<"Your Choice : ";cin >> columns; 

// Initializing
int arr[rows][columns];
// looping to take user input on values of 2D arrayfor (int i=1; i<=rows; i++)
for (int i=1; i<=rows; i++)
    {
    for (int j=1; j<=columns; j++)
        {
        cout << "Enter " << j << " element of row " << i << endl;
        cin >> arr[i][j];
        }
    cout << endl;
    }

//-------------------------------------------------------------------------
// Printing The Arrays
//-------------------------------------------------------------------------
for (int i=1; i<=rows; i++)
    {
    for (int j=1; j<=columns; j++)
    {
    cout << arr[i][j] << " ";
    }
    cout << endl;
    }
//-------------------------------------------------------------------------


















return 0;

}


/*
    - Purpose : 
             Project Creation
    

   Written by Zaheer Ahmed
    MIT License
*/
#include <iostream>
using namespace std;

// Pre defining the functions we will be utlizing

void menu_choice();
void show_seats();
void ticket_purchase(int* );

const int rows = 5;
const int columns = 10;
int user_input;
int map[rows][columns];

int main ()
{

int price_rows [5]; // number of rows for price
price_rows[1] = 100; // Seat Prices
price_rows[2] = 70;
price_rows[3] = 60;
price_rows[4] = 50;
price_rows[5] = 40;

cout << "\n\n ***** Welcome to Zaheer Cinema ***** \n" << endl;

// 2D array for Empty Seats

for (int row = 1; row <=rows; row++)
	{
		for (int column = 1; column <= columns; column++)
			map [row][column] = 0;
	}



	do
	{
		menu_choice();
		switch (user_input)
		{
			case 1:
				cout << "View Seat Prices\n\n";
				for (int i = 1; i <= rows; i++)
				{
					cout << "The price for row "<<(i)<<" : "<<price_rows [i] << endl;
				}
				break;

			case 2:
				cout << "Purchase a Ticket\n\n";
                ticket_purchase(price_rows);
				break;

			case 3:
				cout << "View Available Seats\n\n";
				show_seats();
				break;

			case 4:
				cout << "Exiting Program...!\n\n";
				break;

			default : cout << "Error input\n";
		}

	} while (user_input != 4);

return 0;
}


void menu_choice()
{
cout << "\n\t***Please Enter Your Choice***\t\n";
cout << " 1: View Seat Prices.\n";
cout << " 2: Purchase a Ticket.\n";
cout << " 3: View Available Seats.\n";
cout << " 4: Quit the program.\n";		
cin >> user_input;
}


void show_seats()
{
cout << "\t\tSeats" << endl;
cout << "       1  2  3  4  5  6  7  8  9  10\n";
for (int row = 0; row <= rows; row++)
	{
	cout << endl << "Row " << (row);
	for (int column = 1; column <= columns; column++)
		{
		cout << "  " <<  map[row][column];
		}
	}
cout << endl;
}


void ticket_purchase(int price[])
{
	int row, column; 
	char user_ipnut;
do 
{
	cout << "\nPlease select the row you would like to sit in: ";
	cin >> row;
	
	cout << "\nPlease select the seat you would like to sit in: ";
	cin >> column;
	//  the ticket is already booked
	if (map [row] [column] == 1)
		{
			cout << "Sorry that seat is sold-out, Please select a new seat.\n";
		}
	else 
	{
		cout << "That ticket costs: " << price[row] << endl;
		cout << "Confirm Purchase? Enter ( y = yes / n = no ) ";
		cin >> user_ipnut;
		
		if (user_ipnut == 'y')
		{ 
			cout << "\nYour ticket purchase has been confirmed.\n" << endl;
			map [row][column] = 1;				
		}
		else if (user_ipnut == 'n')
		{
			cout << "\nYour ticket is not confirmed.\n";
		}
	}
	cout << "Would you like to look at another seat?(any key = yes / n = no): \n";
	cin >> user_ipnut;
	}
				
while(user_ipnut!='n'); // exit the seats related stuff
}

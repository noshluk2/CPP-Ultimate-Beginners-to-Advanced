
/*
    - Purpose : 
             Food ordering program in c++

   Written by Zaheer and Luqman
    MIT License
*/
#include "restaurent_header.h"

   
     
void print_menu();       
void customer_order();     
void bill_generator();             


double customer_bill=0;
rest order;



int main()
{
       std::cout << "\n\n***** Welcome to Luqmans Restaurent ****\n\n" ; 
       order.menu_install();
       print_menu();
       customer_order();
       bill_generator();
      
       return 0;

}



void print_menu()
{
int user_food_input;
do {

       std::cout << "Enter\n1 for Breakfast\n2 for Lunch\n3 for Dinner\n\n";
       std::cin >> user_food_input;

       switch (user_food_input)
       {
              case 1:
              {
                     std::cout << " Breakfast items are  \n" << std::endl;
                     std::cout << 1 << ": "<< order.menu[1].dish_name <<"\t" << "RS "  << order.menu[1].price << std::endl;
                     std::cout << 2 << ": "<< order.menu[2].dish_name <<"\t" << "RS "  << order.menu[2].price << std::endl;
                     std::cout << 3 << ": "<< order.menu[3].dish_name <<"\t" << "RS "  << order.menu[3].price << std::endl;
                     std::cout << 4 << ": "<< order.menu[4].dish_name <<"\t" << "RS "  << order.menu[4].price << std::endl;
                     std::cout << 5 << ": "<< order.menu[5].dish_name <<"\t" << "RS "  << order.menu[5].price << std::endl;
                     std::cout << 6 << ": "<< order.menu[6].dish_name <<"\t" << "RS "  << order.menu[6].price << std::endl;
                     std::cout << 7 << ": "<< order.menu[7].dish_name <<"\t\t"<< "RS " << order.menu[7].price << std::endl;
                     break;
              }
              case 2:
              {      
                     std::cout << "\n\n Lunch items are \n" << std::endl;
                     for(int i =8;i<12;i++){
                     std::cout << i << ": "<<  order.menu[i].dish_name   << " \t" << " RS " << order.menu[i].price << std::endl;
                     }
                     break;
              }
              case 3:
              {      
                     std::cout << "\n\nDinner items are \n" << std::endl;
                     for(int i =12;i<16;i++){
                     std::cout << i << ": "<<  order.menu[i].dish_name   << " \t " << " RS " << order.menu[i].price << std::endl;
                     }
                     break;
              }

              default:
              {
                     std::cout << "Invalid Input, Please Select Again\n\n";
              }
       }
} while ( user_food_input != 1 && user_food_input != 2 && user_food_input != 3);
}

void customer_order() //function select the items from the menu
{
       int quantity, user_choice;
       do{
              std::cout << "\n\nEnter your choice : ";
              std::cin >> user_choice;        //takes the choice from the user to select the item
              std::cout << "Enter the Quantity :";
              std::cin >> quantity;

              if ( quantity > 0 && user_choice < 16 ){
                            order.dish_quantity[user_choice] = order.dish_quantity[user_choice] + quantity;
                            std::cout << "You have Selected : " << order.menu[user_choice].dish_name << std::endl;
                     }
              else
                    {
                        std::cout << "invalid input" << std::endl;
                    }

              std::cout << "\nTo select more items enter "" 1 = yes, 2 = no "") ";
              std::cin >> user_choice;


       }
       while (user_choice != 2);
       std::cout << std::endl;
}
void bill_generator(){
       std::cout << "------Thank you for visiting-----" << std::endl;
       for (int i = 1; i < 16; i++){
              if (order.dish_quantity[i] > 0)
              {
                     std::cout << order.dish_quantity[i] << "\t" << order.menu[i].dish_name << "   RS " << order.menu[i].price << std::endl;
                    customer_bill = customer_bill + (order.menu[i].price*order.dish_quantity[i]);
              }

       } order.income_today(customer_bill);
       std::cout << "\n\n-----------------------------------------------" << std::endl;
       std::cout << "            Total Amount      RS " << customer_bill << std::endl;
       std::cout << "-----------------------------------------------" << std::endl;


}


/*
    - Purpose : 
             Food ordering

   Written by Zaheer and Luqman
    MIT License
*/
#include<iostream>

struct menu_item 
{       
       std::string dish_name;
       int price;
};

class rest{
public:
    int dish_quantity[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    menu_item menu[16];  

    void income_today(double current_bill){
        total_bill_today=total_bill_today+ current_bill;
    }
    void menu_install(){
        // breakfast
        menu[1].dish_name = "Plain Egg";     menu[1].price = 15;
        menu[2].dish_name = "Omelet";        menu[2].price = 15;
        menu[3].dish_name = "Paratha";       menu[3].price = 12;
        menu[4].dish_name = "French Toast";  menu[4].price = 20;
        menu[5].dish_name = "Fruit Basket";  menu[5].price = 120;
        menu[6].dish_name = "Coffee";        menu[6].price = 50;
        menu[7].dish_name = "Tea";           menu[7].price = 20;
            
            // Lunch Menu
            
        menu[8].dish_name = "Biryani";       menu[8].price = 200;
        menu[9].dish_name = "Palao";         menu[9].price = 150;
        menu[10].dish_name = "Roll Paratha"; menu[10].price = 100;
        menu[11].dish_name = "Shawarma";     menu[11].price = 100;

            // Dinner Menu

        menu[12].dish_name = "Chicken Karahi";      menu[12].price = 700;
        menu[13].dish_name = "Chicken Tandoori";    menu[13].price = 600;
        menu[14].dish_name = "Chappal Kabab";       menu[14].price = 80;
        menu[15].dish_name = "Seekh Kabab";         menu[15].price = 80;
}

private:
double total_bill_today;






};
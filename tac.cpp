/*
In this file, and every file created for this class, add comments at the top of the file that include:
        - tax.cpp
        - 
        - Javaughn Bradford 
        - 1-29-24
*/

#include<iostream>
#include<string>
#include<iomanip>

int main(){
        // Constant declarations
        const double tax = 0.06;

        bool keepGoing= true;


        while (keepGoing) {
         // input item for to tax 
                std::string desc;
                std::cout<<"Enter a description of your purchase: ";
                std::getline(std::cin, desc);   
                double price = -1.0;
                while (price < 0) {
                std::string priceStr;
                std::cout << "Enter the price for this item: ";
                std::getline(std::cin, priceStr);

                try {
                price = std::stod(priceStr);
                if (price < 0) {
                    std::cout << "Price cannot be negative. Please try again." << std::endl;
                }
            } catch (std::invalid_argument& e) {
                std::cout << "Invalid input. Please enter a valid number." << std::endl;
            }
        }

         

         
       
        

        double salestax = price * tax;
        double total = price + salestax;

        std::cout<<"\n";
        std::cout<<"Desciption of purchased item: " + desc << "."<<std::endl;
        std::cout << "Price: $" << std::fixed << std::setprecision(2) << price << std::endl;
        std::cout << "Sales tax: $" << std::fixed << std::setprecision(2) << salestax << std::endl;
        std::cout << "Total price: $" << std::fixed << std::setprecision(2) << total << std::endl;

        char userChoice;
        std::cout << "\nWould you like to enter another purchase? (y/n): ";
        std::cin >> userChoice;
        if (userChoice != 'y' && userChoice != 'Y') {
            keepGoing = false;
        }
    }
 return 0;
}




        

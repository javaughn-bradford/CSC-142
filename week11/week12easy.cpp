// We did week 12 for week 11 

#include<iostream> 
#include<string>

int main (){
	int gold = 100;
	int potion_price = 10;
	int potions;
	std::cout << "Welcome to the potion shop!\n";
	std::cout << "You have " << gold << " gold.\n";
	std::cout << "Each potion costs " << potion_price << " gold.\n";
	std::cout << "Enter the number of potions you want to buy: ";
	std::cin >> potions;
	std::cout << "You bought " << potions << " potions.\n";
	std::cout <<"you have " <<gold - potion_price*potions << " gold left.\n";
	return 0;
}

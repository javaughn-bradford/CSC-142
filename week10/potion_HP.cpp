/* Healing potion HP code, I used dragon instead on monster 
*/ 

#include <iostream>

void drinkPotion(int &heroHP, int potionHeal)
{
	heroHP += potionHeal;

}

void damageHero(int *heroHP, int damage)
{
	*heroHP -= damage;
}
int main(){

	int heroHP = 10;
	std::cout<< "Hero's starting HP: " << heroHP << std::endl;
	drinkPotion(heroHP, 5);
	std::cout<< "Hero takes a healing potion of +5 HP " << std::endl;
	std::cout<< "Hero's current HP: " << heroHP << std::endl;
	damageHero(&heroHP, 3);
	std::cout<< "Hero takes 3 damage from the dragon" << std::endl;
	std::cout<< "Hero's current HP: " << heroHP << std::endl;
	return 0;

}

// For week 11 we skipped to week 12 instead of week 11

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice(int side) {
	return rand() % side + 1;
}

int main() {
	srand(time(0)); // seed random number generator with current time
	int heroHP = 20;
	int demonHP = 20;
	int heroAttack = 5;
	int demonAttack = 5;
	int round = 1; // Initialize round counter

	std::cout << "Combat simulation between Hero and Demon\n";

	while (heroHP > 0 && demonHP > 0) {
		std::cout << " Round " << round << "!"; // Display round number

		// Hero's turn to attack
		std::cout << "Hero's turn to attack!\n";
		int heroDamage = rollDice(heroAttack);
		std::cout << "Hero rolled a " << heroDamage << "!\n";
		if (heroDamage == 1) {
			std::cout << "Hero missed!\n";
		} else {
			demonHP -= heroDamage;
			std::cout << "Demon took " << heroDamage << " damage!\n";
			std::cout << "Demon's remaining HP: " << demonHP << "\n";
		}

		// Check if demon is defeated
		if (demonHP <= 0) {
			std::cout << "Demon has been vanquished!\n";
			std::cout << "Hero wins!\n";
			break;
		}

		// Demon's turn to attack
		std::cout << "Demon's turn to attack!\n";
		int demonDamage = rollDice(demonAttack);
		std::cout << "Demon rolled a " << demonDamage << "!\n";
		if (demonDamage == 1) {
			std::cout << "Demon missed!\n";
		} else {
			heroHP -= demonDamage;
			std::cout << "Hero took " << demonDamage << " damage!\n";
			std::cout << "Hero's remaining HP: " << heroHP << "\n";
		}

		// Check if hero is defeated
		if (heroHP <= 0) {
			std::cout << "Hero has been defeated!\n";
			std::cout << "Demon wins!\n";
			break;
		}

		std::cout << "Both Hero and Demon are still standing! Starting next round...\n";
		round++; // Increment round counter
	}

	return 0;
}
	

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll_attack() {
	return rand() % 15 + 1; // Random attack value between 1 and 15
}

int roll_defense() {
	return rand() % 3 + 1; // Random defense value between 1 and 3
}

bool is_hit(int attack, int defense) {
	return attack > defense; // Hit if attack is greater than defense
}

int duel() {
	int ObiWanHP = 20;
	int MaulHP = 20;
	int ObiWanDefensePoints = rand() % 3 + 1; // Random defense points between 1 and 3
	int MaulDefensePoints = rand() % 3 + 1; // Random defense points between 1 and 3
	const int maxRounds = 5;

	int ObiWanWins = 0;
	int MaulWins = 0;

	cout << "Combat simulation between Obi-Wan and Maul\n";

	for (int round = 1; round <= maxRounds; ++round) {
		cout << "Round " << round << ":\n";

		// Obi-Wan's turn
		int ObiWanAttack = roll_attack();
		int MaulDefense = roll_defense() + MaulDefensePoints;

		if (is_hit(ObiWanAttack, MaulDefense)) {
			MaulHP--;
			cout << "Obi-Wan hits Maul! Maul's HP: " << MaulHP << "\n";
		} else {
			cout << "Maul defends against Obi-Wan's attack with " << MaulDefense << " points.\n";
		}

		// Maul's turn
		int MaulAttack = roll_attack();
		int ObiWanDefense = roll_defense() + ObiWanDefensePoints;

		if (is_hit(MaulAttack, ObiWanDefense)) {
			ObiWanHP--;
			cout << "Maul hits Obi-Wan! Obi-Wan's HP: " << ObiWanHP << "\n";
		} else {
			cout << "Obi-Wan defends against Maul's attack with " << ObiWanDefense << " points.\n";
		}

		// Display round results
		cout << "End of Round " << round << ":\n";
		cout << "Obi-Wan HP: " << ObiWanHP << ", Maul HP: " << MaulHP << "\n";

		// Determine the winner of the round
		if (ObiWanHP > MaulHP) {
			ObiWanWins++;
			cout << "Obi-Wan wins round " << round << "!\n";
		} else if (MaulHP > ObiWanHP) {
			MaulWins++;
			cout << "Maul wins round " << round << "!\n";
		} else {
			cout << "Round " << round << " is a draw!\n";
		}
	}

	cout << "\nAfter " << maxRounds << " rounds:\n";
	cout << "Obi-Wan wins " << ObiWanWins << " rounds.\n";
	cout << "Maul wins " << MaulWins << " rounds.\n";

	if (ObiWanWins > MaulWins) {
		cout << "Obi-Wan wins the Duel!\n";
	} else if (MaulWins > ObiWanWins) {
		cout << "Maul wins the Duel!\n";
	} else {
		cout << "The duel ends in a draw!\n";
	}

	return 0;
}

int main() {
	srand(static_cast<unsigned>(time(0))); // Seed the random number generator
	return duel(); // Call the duel function
}

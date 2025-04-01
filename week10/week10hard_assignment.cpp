#include <iostream>
#include <string>
// I'm using naruto powers for my magic items,
class MagicItem{
public:	
	MagicItem(const std::string& name, const std::string& powerType, int charges)
: name_{name}, powerType_{powerType}, charges_{charges} {
std::cout << name_ << " (" << powerType_ << " power) created with " << charges_ << " charges!\n";
}

	void use() {
		if (charges_ > 0) {
			std::cout << "Using " << name_ << " with " << powerType_ << " power!\n";
			--charges_;
			std::cout << "charges left: " << charges_ << "\n";
		} else {
			std::cout << name_ << " has no more charges!\n";
		}
	}
private:
	std::string name_;
	std::string powerType_;
	int charges_;
};

int main() {
	MagicItem Amitaratsu("Amitaratsu", "Fire", 3);
	MagicItem Rasengan("Rasengan", "energy", 2);
	MagicItem Chidori("Chidori", "Electricity", 1);

	Amitaratsu.use();
	Amitaratsu.use();
	Amitaratsu.use();
	Amitaratsu.use(); // No more charges

	Rasengan.use();
	Rasengan.use();
	Rasengan.use(); // No more charges

	Chidori.use();
	Chidori.use(); // No more charges

	return 0;
}

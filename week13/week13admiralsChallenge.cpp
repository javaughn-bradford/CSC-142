#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
	double distance, fuel, spaceship_weight, life_support;
	int crew_size;
	std::cout << "Enter distance to certain Planet(Million Km): ";
	std::cin >> distance;

	std::cout << "Enter fuel available(Tons): ";
	std::cin >> fuel;

	std::cout << "Enter spaceship weight(Tons): "; // in tons 
	std::cin >> spaceship_weight;

	std::cout << "Enter life support duration (In days): ";
	std::cin >> life_support;

	std::cout << "Enter crew size: ";
	std::cin >> crew_size;
	// calculate fuel efficiency 
	double fuel_efficiency = (fuel / spaceship_weight) * 100; // 1- 100 percentage 	
	// caluculate travel speed
	double travel_speed = (fuel * 10000) / (crew_size * spaceship_weight); // in km/h
	// calculate travel time
	double travel_time = (distance * 1000000) / travel_speed; // in hours
	int travel_days = static_cast<int>(std::ceil(travel_time));

	// mission viability check

	bool is_viable = (fuel_efficiency >= 20.0) && 
					(life_support > (travel_days + 10)) &&
					(crew_size <= 8) && (crew_size >= 2) &&
					(spaceship_weight < 500) &&

	std::cout << std::fixed << std::setprecision(2); // set precision for output
	std ::cout << "Fuel efficiency: " << fuel_efficiency << "%\n";\
	std::cout << "Travel speed: " << travel_speed << " km/h\n";
	std::cout << "Travel time: " << travel_days << " days\n";


	
	std::cout << "Mission viability: " << (is_viable ? "Viable" : "Not Viable") << "\n";
	if (is_viable) {
		std::cout << "Mission is viable. Prepare for takeoff! \n";
	} else {
		std::cout << "Mission is not viable. Abort the mission!\n";
	}
return 0;
}

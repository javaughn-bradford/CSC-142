#include <iostream>
#include <cmath>
#include <iomanip>

constexpr double pi = 3.14159265358979323846;
// degrees to radians conversion
constexpr double toRadians(double degrees) {
	return degrees * (pi / 180.0);
}

int main(){
	double x,y,z;
	double thrust, angle_deg, warp_factor;
	std::cout << "Enter coordinates (X: )";
	//prompt user for coordinates
	std::cin >> x;
	std::cout << "Enter coordinates (Y: )";
	std::cin >> y;
	std::cout << "Enter coordinates (Z: )";
	std::cin >> z;
	//prompt user for thrust
	std::cout << "Enter thrust : ";
	std::cin >> thrust;
	// prompt user for angle
	std::cout << "Enter angle (in degrees):  ";
	std::cin >> angle_deg;

	std::cout << "Enter warp factor: ";
	std::cin >> warp_factor;

// convert angle to radians
	double angle_rad = toRadians(angle_deg);

	// calculate new coordinates
	double new_x = (x + thrust * std::cos(angle_rad)) * warp_factor;
	double new_y = (y + thrust * std::sin(angle_rad)) * warp_factor;
	double new_z = z + (thrust / warp_factor); // assuming z is affected by thrust and warp factor
	std::cout << std::fixed << std::setprecision(3); // set precision for output
	std::cout << "Initial coordinates: (" << x << ", " << y << ", " << z << ")\n";
	std::cout << "New coordinates: (" << new_x << ", " << new_y << ", " << new_z << ")\n";
	std::cout << "After hyperspace jump, the coordinates are:\n";
	std::cout << "X: " << new_x << "\n";
	std::cout << "Y: " << new_y << "\n";
	std::cout << "Z: " << new_z << "\n";
	return 0;

}

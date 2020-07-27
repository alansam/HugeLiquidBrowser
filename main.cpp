#include <iostream>
#include <string>
#include <iomanip>

//using namespace std; 

int main() {
  int x = 5;
  std::cout << 5.0 - 3.5 << std::endl;
  std::cout << (x++) - (7.0 / 2.0) << std::endl;
  x = 5;
  std::cout << x - (7.0 / 2.0) << std::endl;
  std::cout << x++ << std::endl;
  std::cout << x << std::endl;
  std::cout << (7.0 / 2.0) << std::endl;
  std::cout << x - (7.0 / 2.0) << std::endl;
  std::cout << x++ - (7.0 / 2.0) << std::endl;
  x = 5;
  std::cout << x++ - (7.0 / 2.0) << std::endl;

//return 0;
	std::cout << "Hallo wie heißt du? \n";
	std::string name;
	std::getline(std::cin, name); // I wanna that it prints all the string with space between them.
	std::cout << "Hallo " << name << "! \n";

	return 0;
}

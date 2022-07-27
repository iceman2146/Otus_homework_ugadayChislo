#include "ZagadaiChislo.h"

#include <cstdlib>
#include <ctime>
    
int ZagadayChislo(int max)
{
    const int max_value = max;
	std::srand(std::time(nullptr)); // use current time as seed for random generator
	const int random_value = std::rand() % 100;
    return random_value;
}
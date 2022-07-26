#include <iostream>

#include "ZagadaiChislo.h"
void GameLoop(int a, int b);
int main() {


    int target=ZagadayChislo();
    int current_value=0;

std::cout << target << std::endl;

std::cout << "Enter your guess:" << std::endl;
GameLoop(current_value,target);


	return 0;
}

void GameLoop(int current_value, int target){
    	do {
		std::cin >> current_value;

		if (current_value < target) {
			std::cout << "Less " << current_value << std::endl;
		}
		else if (current_value > target) {
			std::cout << "Greater " << current_value << std::endl;
		}
		else {
			std::cout << "Win!" << std::endl;
			break;
		}

	} while(true);

}
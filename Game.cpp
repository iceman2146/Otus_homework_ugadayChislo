#include <iostream>
#include <string>

#include "ZagadaiChislo.h"
#include "HighScore.h"
void GameLoop(int a, int b,int&c);
void Setup(int&);


int main() {
    std::string user_name;
	int attempt=0;
    int target;
    int current_value=0;
    std::cout << "Hi! Enter your name, please:" << std::endl;
	std::cin >> user_name;

    Setup(target);


std::cout << target << std::endl;

std::cout <<user_name <<" enter your guess:" << std::endl;
GameLoop(current_value,target, attempt);
CreateandWriteinFile (user_name, attempt);
ReadFile();
	return 0; 
}

void GameLoop(int current_value, int target, int& attempt)
{
	
    	do {
		std::cin >> current_value;

		if (current_value < target) {
			std::cout << "Less " << current_value << std::endl;
			attempt++;
		}
		else if (current_value > target) {
			std::cout << "Greater " << current_value << std::endl;
			attempt++;
		}
		else {
			std::cout << "Win!" << std::endl;
			break;
		}

	} while(true);

}
void Setup(int &target)
{
    target=ZagadayChislo();
}
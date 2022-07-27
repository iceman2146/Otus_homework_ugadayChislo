#include "HighScore.h"

#include <iostream>
#include <fstream>
#include <string>


int CreateandWriteinFile(const std::string& user_name, int atempt) 
{

	const std::string high_scores_filename = "high_scores.txt";

		std::ofstream out_file{high_scores_filename, std::ios_base::app};
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return -1;
		}
		// Append new results to the table:
		out_file << user_name << ' ';
		out_file << atempt;
		out_file << std::endl;
}
int ReadFile()
	{
        char answer;
        std::cout<<"Posmotrim records?(y or somthing else)";
        std::cin>>answer;
        if(answer=='y')
        {
        const std::string high_scores_filename = "high_scores.txt";
		std::ifstream in_file{high_scores_filename};
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		std::cout << "High scores table:" << std::endl;

		std::string username;
		int high_score = 0;
		while (true) {
			// Read the username first
			in_file >> username;
			// Read the high score next
			in_file >> high_score;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			// Print the information to the screen
			std::cout << username << '\t' << high_score << std::endl;
		}
        }
        return 0;
	}

#include "HighScore.h"

#include <iostream>
#include <iomanip>
#include <fstream>


//int CreateandWriteinFile(const std::string& user_name, int atempt) //con
int CreateandWriteinFile(person Player)
{

	const std::string high_scores_filename = "high_scores.txt";

		std::ofstream out_file{high_scores_filename, std::ios_base::app};
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return -1;
		}
		// Append new results to the table:
		out_file << Player.user_name << ' ';
		out_file << Player.attempt;
		out_file << std::endl;
}
int ReadFile()
	{
		int size=100;
		person* savedata=new person[size];	

		
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
		
				//std::string username;
		//int high_score = 0;
		int counter=0;
		while (true)
		 {
			// Read the username first
			in_file >>  savedata[counter].user_name;
			
			// Read the high score next
			in_file >> savedata[counter].attempt;
			// Ignore the end of line symbol
			in_file.ignore();
			counter++;

			if (in_file.fail()) {
				break;
			}
			
			
			

			// Print the information to the screen
			//std::cout << username << '\t' << high_score << std::endl;
		}
		std::cout<<counter<<std::endl;
		for(int i=0;i<counter-1;i++)
		{
			std::cout<<std::setw(10)<<std::setiosflags(std::ios::left)<<savedata[i].user_name<<":       "<<savedata[i].attempt<<std::endl;
		}

		
		}
        
        return 0;
	}

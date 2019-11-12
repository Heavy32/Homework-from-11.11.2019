#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h> 

using namespace std;
int main()
{
	//Everything you can see I got from google, youtube tutorials, documentation and from some C# base. It might scare you,
	//I tried my best =D
	//Also there is a link to GitHub for better checking and commenting my code. thank you very much! 
#pragma region FirstTask
	std::string liryc[6] = {
		"In their blood",
		"I will stand",
		"Let the waning light of man",
		"Cast my shadow",
		"On the fires of war", 
		"Author: Kelli Schaefer",			
	};

	for (int i = 0; i < std::size(liryc); i++) {
		system("Color ");
		std::cout << liryc[i] << std::endl;
	}
#pragma endregion

#pragma region SecondTask
	//Sorry, I didn't get the task, so I've done as I got it.

	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	std::string hunterLiryc[7] = { "every",
								   "hunter",
								   "wants to",
								   "know",
								   "where",
								   "pheasant",
								   "sits" };

	int colorsForLiryc[7] = { 4,  12, 6,  2, 3, 1, 5 };

	int offset = 0;
	for (int i = 0; i < 7; i++)
	{
		int letterInWordCount = hunterLiryc[i].size();

		SetConsoleTextAttribute(color, colorsForLiryc[i]);
		std::cout << hunterLiryc[i] << endl;

		for (int j = 0; j < letterInWordCount + offset; j++)
		{
			std::cout << " ";
		}
		offset += letterInWordCount;
	}
	SetConsoleTextAttribute(color, 7);
	std::cout << "\r";
#pragma endregion

#pragma region ThirdTask
	//this solution is bad, cause we can't add a new person without a problem, the best way is to create class "Person" 
	//and then a List<Person>, but creatin a class in C++ is harder than in C#, so I skip this point

	std::string namesDataBase[6] = { "Dima", "Sasha", "Pasha", "Carl", "Joseph", "Saske" };
	std::string SurnamesDataBase[6] = { "Belkin", "Sashov", "Technik", "Bazinga", "Joestar", "Uchiha" };

	for (int i = 0; i < 6; i++)
	{
		std::cout << i + 1 << "\t" + namesDataBase[i]  << "\t " + SurnamesDataBase[i] << endl;
	}

#pragma endregion

}


#include "profile.hpp"
#include <iostream>
#include <string>

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns, std::vector <std::string> new_hobbies)
		: name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) 
{
  std::cout << "Logging in...";
  
  std::cout << "welcome!" << std::endl;
	hobbies = new_hobbies;
};

Profile::~Profile() 
{
	//std::cout << "Logging out..." << std::endl;
}

std::string Profile::view_profile() 
{
	std::string hobbies_extend = "";
	for (int i = 0; i < hobbies.size(); i++) 
	{
		if (i == hobbies.size()-1) 
		{
			hobbies_extend += hobbies[i];
		}
		else
		{
			hobbies_extend += hobbies[i] + ", ";
		}
			
	}
	std::string profile_info = "Name: " + name + "\nAge: " + std::to_string(age) + "\nCountry: " + country + 
	"\nPronouns: "+ pronouns + "\nHobbies: " + hobbies_extend;
	
	return profile_info;
}

void Profile::add_hobby(std::string new_hobby) 
{
	hobbies.push_back(new_hobby);
}
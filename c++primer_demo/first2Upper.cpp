#include<iostream>
#include<string>
using std::string;
int first2Upper() 
{
	string line;
	while (getline(std::cin, line))
	{
		for (decltype(line.size()) index = 0; index != line.size() && !isspace(line[index]); ++index) {
			line[index] = toupper(line[index]);

		}
		std::cout << line << std::endl;
	}
	return 0;
}
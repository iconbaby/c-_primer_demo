#include<iostream>
#include<string>
using std::string;
int string2Upper() {
	string line;
	while (getline(std::cin, line))
	{

		for (auto &c : line) {
			if (!ispunct(c)) {
				c = toupper(c);
			}
		}
		std::cout << line << std::endl;
	}
	return 0;
}
#include<iostream>
#include<string>
#include<cctype>
#include"c++_primer.h"
using std::string;
int numOfPunct()
{
	std::cout << "numOfPunct" << std::endl;
	string s;
	int cout = 0;
	while (getline(std::cin, s))
	{
		for (auto c : s) {
			if (ispunct(c)) {
				++cout;
			}
		}
		std::cout << cout << std::endl;
	}
	return 0;
}
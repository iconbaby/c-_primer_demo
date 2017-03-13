#include "c++_primer.h"
#include<iostream>
#include<string>
using std::string;
int compare_string() {
	string s1, s2;
	while (std::cin >> s1 >> s2) {
		if (s1.size() > s2.size()) {
			std::cout << s1 << std::endl;
		}
		else {
			std::cout << s2 << std::endl;
		}
	}
	return 0;

}
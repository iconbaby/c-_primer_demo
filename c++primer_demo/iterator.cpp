#include"c++_primer.h"
#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;
int test_iterator() {
	//string s("some cache");
	//
	//if (s.begin() != s.end()) {
	//	auto it = s.begin();
	//	*it = toupper(*it);
	//}


	//for (auto i = s.begin(); i != s.end() && !isspace(*i); ++i) {
	//	*i = toupper(*i);

	//}
	//std::cout << s << std::endl;
	//return 0;

	//vector<int> s(10, 1);
	//for (auto it = s.begin(); it != s.end(); ++it) {
	//	*it *= 2;
	//}

	//for (auto &i : s) {
	//	std::cout << i << std::endl;
	//}

	//constexpr int a = 23;
	//int ab[a];
	//int c[3] = { 1,2,2 };
	//char a4[6] = "Daine";
	//char s[23] = { 'a','a','b' };
	//for (auto i : s) {
	//	std::cout << i << std::endl;
	//}

	//string s("adbcd");
	//for (auto &i : s) {
	//	i += 2;
	//}

	//for (auto i = s.begin(); i != s.end(); ++i) {
	//	std::cout << *i << std::endl;
	//}

	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 0; ix < array_size; ++ix) {
		ia[ix] = ix;
	}

	for (auto i : ia) {
		std::cout << i << std::endl;
	}

	return 0;
}
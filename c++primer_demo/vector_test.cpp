#include "c++_primer.h"
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
int test_vector()
{
	//vector<string> str{ "hell" };
	//vector<string> str2(10);
	//vector <vector<string>> ivec;
	////vector<string>vec = ivec;
	//vector<string> svec(10, "null");
	//vector<int> vec;
	//for (int i = 0; i != 100; ++i) {
	//	vec.push_back(i);

	//}

	//for (auto &i : vec) {
	//	std::cout << i << std::endl;
	//}

	//string word;
	//vector<string> vec_word;
	//while (std::cin >> word&&word != "null") {
	//	vec_word.push_back(word);
	//}
	//for (auto &i : vec_word) {
	//	std::cout << i << std::endl;
	//}

	vector<unsigned> scores(11, 0);
	unsigned score;
	while (std::cin >> score) {
		if (score <= 100) {
			++scores[score / 10];
		}
	}

	for (auto i : scores) {
		std::cout << i;
	}
	return 0;
}
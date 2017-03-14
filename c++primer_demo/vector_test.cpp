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

	//vector<unsigned> scores(11, 0);
	//unsigned score;
	//while (std::cin >> score) {
	//	if (score <= 100) {
	//		++scores[score / 10];
	//	}
	//}

	//for (auto i : scores) {
	//	std::cout << i;
	//}


	//string word;
	//vector<string> line;
	//while (std::cin >> word) {
	//	line.push_back(word);
	//}
	//for (auto &i : line) {
	//	for (auto &j : i) {
	//		j = toupper(j);
	//	}
	//	std::cout << i << std::endl;
	//}

	//vector<int> vec(10, 42);
	//vector<int> vec{ 10,10 };
	//vector<string> vec(10, "42");

	vector<int> nums;
	int a;
	while (std::cin >> a) {
		nums.push_back(a);
	}

	for (int i = 0; i != nums.size()/2; ++i) {
		std::cout << nums[i] + nums[nums.size() - 1 - i] << std::endl;
	}
	return 0;
}
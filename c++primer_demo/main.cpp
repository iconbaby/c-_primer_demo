#include<iostream>
#include<string>
#include"c++_primer.h"
using std::string;
int main()
{
	//string line;
	//while (getline(std::cin, line))
	//{
	//	if (!line.empty()) {
	//		auto type = line.size();
	//		if (line.size() > 8) {
	//			std::cout << type << std::endl;
	//			std::cout << line << std::endl;

	//		}
	//	}
	//	else {
	//		break;
	//	}
	//}

	//比较两个字符串的长度
	//compare_string();

	//读出每一行的标点符号个数
	//numOfPunct();

	//将字符串改写成大写
	//string2Upper();

	//遍历vecotor
	//test_vector();


	//将第一个单词大写
	//first2Upper();

	//测试iterator
	//test_iterator();


	//测试array
	//array_test();

	//测试cstring
	//test_ctring();

	//测试指针型参
	//string s;
	//string n;
	//while (std::cin >> s >> n) {
	//	std::cout << compare_string_size(s, n) << std::endl;
	//}
	string s = "assdfsdf";
	string::size_type ctr = 0;
	std::cout << find_char(s, 'd', ctr) << std::endl;

}

string::size_type find_char(const string &s, char c, string::size_type &occurs) {
	auto ret = s.size();
	occurs = 0;

	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size()) {
				ret = i;
			}
			++occurs;
		}
	}
	return ret;
}
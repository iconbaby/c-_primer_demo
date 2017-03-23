#include<initializer_list>
#include<string>
#include "c++_primer.h"
using std::initializer_list;
using std::string;
int test_initializer() {
	initializer_list<string> itl;
	return 0;
}
void swap(int &v1, int &v2) {
	if (v1 == v2) {
		return;
	}
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
}

const string &mainp() {
	string ret = "asdf";
	if (!ret.empty()) {
		return ret;
	}
	else
		return "empth";
}
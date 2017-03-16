#include<iostream>
#include<cstring>
#include"c++_primer.h"
#include<vector>
#include<string>
using namespace std;
int test_ctring() {
	//const char a[] = { 'h','e','l','e',' '};
	//const char *cp = a;
	//while (*cp) {
	//	cout << *cp << endl;
	//	++cp;
	//}
	vector<string> vc = { "wehlo","wew.","workd" ,"."};
	for (const auto &i : vc) {
		cout << i;
		if (i.empty() || i[i.size() - 1] == '.') {
			cout << endl;
		}
		else {
			cout << " ";
		}
	}

	int i; double d;
	//d = i = 3.5;
	i = d = 3.5;
	cout << d << i << endl;

	double dval; int ival; int *pi;
	int *p = 0;
	sizeof *p;
	int gradle = 3;
	std::cout << (gradle > 12 ? "pass" : "fail");
	return 0;
}
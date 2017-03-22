#include"c++_primer.h"
#include<string>
#include<vector>
using std::vector;
int  test_function(int &i) {
	i = 0;
	const int *cp = &i;

	const int &r = i;
	return 0;
}

bool test_hasUpper(const string &str) {
	for (auto s : str) {
		if (isupper(s)) {
			return true;
		}
	}
	return false;
}

int upper2lower(string &str) {
	for (auto &i : str) {
		i = tolower(i);

	}
	return 0;
}

int test_ventor() {
	int i = 0, j[2] = { 0,1 };
	int sd[12];

}




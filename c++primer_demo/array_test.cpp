#include<iostream>
#include "c++_primer.h"
#include<iterator>
#include<vector>
using namespace std;
int array_test() {
	int ar[] = { 1,2,3,4,5,-1,6,7,8 };
	int *beg = begin(ar);
	int *last = end(ar);
	while (beg != last && *beg > 0) {
		++beg;
	}
	cout << *beg << endl;
	

	int *p = &ar[2];
	int a = p[1];
	for (auto &i : ar) {
		i+=2;
		std::cout << i << std::endl;
	}
	std::cout << a << std::endl;
	return 0;


}
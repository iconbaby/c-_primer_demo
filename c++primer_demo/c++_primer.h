#ifndef PRIMER_H
#define PRIMER_H
#include<string>
using std::string;

extern int compare_string();

extern int numOfPunct();

extern int string2Upper();

extern int first2Upper();

extern int test_vector();

extern int test_iterator();

extern int array_test();

extern int test_ctring();

extern bool compare_string_size(const string &i, const string &u);

extern string::size_type find_char(const string &s, char c, string::size_type &occurs);

#endif // !PRIMER_H
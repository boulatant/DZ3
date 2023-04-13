#include "../include/inout.h"
#include <iostream>
#include <string>
using namespace std;
void read(std::vector<int>& vec) {
	string size_s;
	cout << "size:\n";
	getline(cin, size_s);
	int size = stoi(size_s);
	vec.resize(size);
	string values;
	cout << "values:\n";
	getline(cin, values);
	string buffer;
	int c = 0;
	for (char s : values) {
		if (s != ' ') {
			buffer += s;
		} else {
			vec[c]=stoi(buffer);
			buffer = "";
			c++;
		}
		
	}
	vec[c]=stoi(buffer);
}
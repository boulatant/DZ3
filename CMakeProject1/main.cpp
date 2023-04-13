#include <algorithm>
#include "inoutlib/include/inout.h"
#include <string>
#include <iostream>
int main() {
	std::vector<int> vec;
	read(vec);
	std::sort(vec.begin(), vec.end());
	print(vec);
	std::string pause;
	std::cin >> pause;
	return 0;
}
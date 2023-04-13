#include "../include/inout.h"
#include <iostream>
void print(const std::vector<int>& vec) {
	for (int i : vec) {
		std::cout << i << " ";
	}
}
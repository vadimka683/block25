#include "gpu.h"
#include<vector>
#include<iostream>

void print(std::vector<int>& mem) {
	for (int i = 0; i < mem.size(); i++) {
		std::cout << mem[i] << " ";
		if (i == mem.size() - 1) { std::cout << "\n"; }
	}
}

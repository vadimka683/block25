#include "cpu.h"
#include<vector>
#include<iostream>

void compute(std::vector<int>& mem) {
	int sum = 0;
	for (int i = 0; i < mem.size(); i++) {
		sum += mem[i];
	}
	std::cout << "Sum = " << sum << "\n";
}
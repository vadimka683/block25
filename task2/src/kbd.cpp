#include "kbd.h"
#include<vector>

void input_buffer(std::vector<int>& mem) {
	for (int i = 0; i < mem.size(); i++) {
		std::cout << "Input " << i + 1 << " number buffer ";
		std::cin >> mem[i];
	}
}
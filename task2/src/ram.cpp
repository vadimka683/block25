#include<vector>
#include "ram.h"
#include "gpu.h"
#include "kbd.h"

void read(std::vector<int>& mem) {
	print(mem);
}

void write(std::vector<int>& mem) {
	mem.resize(8);
	input_buffer(mem);
}
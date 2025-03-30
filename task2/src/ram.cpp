#include<vector>
#include "ram.h"
#include "gpu.h"
#include "kbd.h"
#include "disk.h"
#include "cpu.h"

void read(std::vector<int>& mem) {
	print(mem);
}

void write(std::vector<int>& mem) {
	mem.resize(8);
	input_buffer(mem);
}
void load(std::vector<int>& mem) {
	mem.clear();
	load_buffer(mem);
}
void save(std::vector<int>& mem) {
	save_buffer(mem);
}
void sum(std::vector<int>& mem) {
	compute(mem);
}

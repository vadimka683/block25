#include "disk.h"
#include<vector>
#include<fstream>
#include<iostream>
#include<string>

void save_buffer(std::vector<int>& mem) {
	std::ofstream save("data.txt");
	for (int i = 0; i < mem.size(); i++) {
		save << mem[i];
		if (i != mem.size()) {
			save << " ";
		}
	}
	save.close();
}

void load_buffer(std::vector<int>& mem) {
	std::ifstream load("data.txt");
	if (!load.is_open()) {
		std::cout << "Error";
		return;
	}
	int i = 0;	
	int temp;
	while (load >> temp) {
		mem.push_back(temp);
		i++;
	}
	load.close();
}
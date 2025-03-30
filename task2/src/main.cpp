#include "task2.h"
#include "ram.h"
#include<vector>

int main()
{
	std::vector<int> memory;
	int comand;
	do {
		std::cout << "Input number comand: 1.Sum 2.save 3.load 4.input 5.display 6.exit: ";
		std::cin >> comand;
		if (comand == 1) {
			sum(memory);
		}
		else if (comand == 2) {
			save(memory);
		}
		else if (comand == 3) {
			load(memory);
		}
		else if (comand == 4) {
			write(memory);
		}
		else if (comand == 5) {
			read(memory);
		}
		else if (comand == 6) {
			break;
		}
	} while (true);
}

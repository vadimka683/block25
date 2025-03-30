#include "Items.h"
#include<iostream>

int main()
{
	double X1, Y1;
	std::cout << "Input X1 and X2 for scalpel: ";
	std::cin >> X1 >> Y1;
	scalpel(X1, Y1);
	int comand;
	do {
		std::cout << "Input number comand: 1.hemostat 2.tweezers 3.suture: ";
		std::cin >> comand;
		if (comand == 1) {
			std::cout << "Input the hemostat coordinate: ";
			double X;
			std::cin >> X;
			hemostat(X);
		}
		else if (comand == 2) {
			std::cout << "Input the tweezers coordinate: ";
			double X;
			std::cin >> X;
			hemostat(X);
		}else if (comand == 3) {
			std::cout << "Input X1 and X2 for suture: ";
			double X2, Y2;
			std::cin >> X2 >> Y2;
			if (suture(X1, Y1, X2, Y2)) {
				break;
			}
		}
	} while (true);
}

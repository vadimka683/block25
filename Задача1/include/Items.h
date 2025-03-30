#pragma once
#include <iostream>

void scalpel(const double& X, const double& Y) {
	std::cout << "Cut between" << X << " and " << Y << "\n";
}
void hemostat(const double& X) {
	std::cout << "Hemostat in " << X << "\n";
}
void tweezers(const double& X) {
	std::cout << "Tweezers in " << "X" << "\n";
}
bool suture(const double& X1, const double& Y1, const double& X2, const double& Y2) {
	if (X1 != X2 || Y1 != Y2) {
		return false;
	}
	std::cout << "Suture between" << X2 << " and " << Y2 << "\n";
	return true;
}
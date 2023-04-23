#include "Flat.h"
#include <iostream>
Flat::Flat(const int s, const int c) :
	square{ s }, cost{ c }
{}

Flat::Flat():
	Flat(0,0)
{}

void Flat::Print() {
	std::cout << "square: " << square << std::endl;
	std::cout << "cost: " << cost << std::endl;
}
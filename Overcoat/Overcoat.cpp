

#include <iostream>
#include "Overcoat.h"

Overcoat::Overcoat(const char* t, int c) :
	type{ (t) ? new char[strlen(t) + 1] : nullptr },
	cost{ c } 
{
	SetType(t);
}

Overcoat::Overcoat() :
	Overcoat(nullptr, 0)
{}

Overcoat::~Overcoat() {
	delete[]type;
}

void Overcoat::SetType(const char* t) {
	if (t) {
		if (type) delete[]type;
		type = new char[strlen(t) + 1];
		strcpy_s(type, strlen(t) + 1, t);
	}
}

void Overcoat::print() {
	std::cout << "type: " << type << std::endl;
	std::cout << "cost: " << cost << std::endl;
}


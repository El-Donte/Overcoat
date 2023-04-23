#pragma once
#include <iostream>
class Overcoat
{
	char* type;
	int cost;
public:
	Overcoat();
	Overcoat(const char* t, int c);
	~Overcoat();
	Overcoat& operator=(const Overcoat& coat) {
		if (this == &coat) { return *this; }

		delete[] type;
		type = new char[strlen(coat.type) + 1];
		strcpy_s(type, strlen(coat.type) + 1, coat.type);
		cost = coat.cost;

		return *this;
	}

	friend bool operator>(const Overcoat& coat1, const Overcoat& coat2) {
		return coat1.cost > coat2.cost;
	}

	friend bool operator==(const Overcoat& coat1, const Overcoat& coat2) {
		return coat1.type == coat2.type;
	}

	void SetType(const char* Type);

	void print();
};


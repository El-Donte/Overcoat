#pragma once
class Flat
{
	int cost;
	int square;
public:
	Flat();
	Flat(int s, int c);

	Flat& operator=(const Flat& flat) {
		if (this == &flat)
		{
			return *this;
		}

		cost = flat.cost;
		square = flat.square;
		return *this;
	}

	friend bool operator>(const Flat& flat1, const Flat& flat2) {
		return flat1.cost > flat2.cost;
	}

	friend bool operator==(const Flat& flat1, const Flat& flat2) {
		return flat1.square == flat2.square;
	}

	void Print();
};


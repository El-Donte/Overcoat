#include <iostream>
#include "Overcoat.h"
#include "Flat.h"


int main() {
	Flat flat1(56, 1000);
	Flat flat2(46, 900);

	Overcoat coat1("coat", 100);
	Overcoat coat2("daad", 90);

	

	/*if (flat1 > flat2) {
		flat1.Print();
	}
	else {
		flat2.Print();
	}

	std::cout << std::endl;

	flat1.Print();
	flat2.Print();

	std::cout << std::endl;

	flat1 = flat2;

	flat1.Print();
	flat2.Print();*/


	if (coat1 > coat2) {
		coat1.print();
	}
	else {
		coat2.print();
	}

	std::cout << std::endl;

	coat1.print();
	coat2.print();

	std::cout << std::endl;

	coat1 = coat2;

	coat1.print();
	coat2.print();
	
}
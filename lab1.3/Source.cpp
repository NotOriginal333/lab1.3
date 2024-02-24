#include "Money.h"
#include <iostream>

Money makeMoney() {
	Money obj;
	obj.Init();
	return obj;
}

int main() {
	Money mon1, mon2, mon3;
	mon1 = makeMoney();
	mon2 = makeMoney();
	mon2.Display();

	std::cout << "mon1: " << std::endl;
	mon1.Read();
	mon1.Display();
	mon1.calculateTotalAmount();
	std::cout << mon1.displayTotal() << std::endl;

	std::cout << "mon3: " << std::endl;
	mon3.Read();
	mon3.Display();
	std::string a, b;
	a = mon3.toString();
	std::cout << a << std::endl;
	mon3.calculateTotalAmount();
	b = mon3.displayTotal();
	std::cout << b << std::endl;

	if (mon3.comparison(mon1, mon3)) {
		std::cout << "mon1 = mon2" << std::endl;
	}
	else std::cout << "mon1 != mon2" << std::endl;

	mon1.divideBy(2);
	std::cout << "mon1 sum devide by 2: " << mon1.getTotal() << std::endl;
}
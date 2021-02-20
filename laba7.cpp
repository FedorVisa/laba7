#include <iostream>
#include <string>
#include "longtohex.h"

int main()
{
	long num;
	char  m[256] = {};

	std::cout << "enter long number" << std::endl;
	std::cin >> num;
	std::cout << longtoah(num, m);


	return 0;
}


#include <iostream>
#include "log.h"

int main(void) 
{
	int a = 8;
	a++;
	const char* string = "Hello World!";
	for (int i = 0; i < 5; i++)
	{
		const char c = string[i];
		std::cout << c << std::endl;
	}
	log("Hello World!");
	std::cin.get();
	return 0;
}

#include <iostream>

#include "docker-test-library/docker-test-library.h"

int main()
{
	std::cout << "Hello " << test::name() << std::endl;
	return 0;
}

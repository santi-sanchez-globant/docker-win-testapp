// docker-test-library.cpp : Defines the entry point for the application.
//

#include "docker-test-library.h"
#include "docker-test-library/docker-test-library_Export.h"

namespace test
{ 
	docker_test_library_EXPORT std::string name()
	{
		return "docker-test-library";
	}
}

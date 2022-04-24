#include <iostream>
#include <string>
#include <unistd.h>

#include <config.h>
#include <applets.hpp>

#if PWD_BUILD == 1

void pwd_usage(int exit_code)
{
	exit(0);
}

int pwd_main(int argc, char *argv[])
{
	char path[4096];
	if (argc == 1)
	{
		getcwd(path, 4096);
		std::cout << path << std::endl;
	}
	else if (argv[1][0] != '-')
	{
		getcwd(path, 4096);
		std::cout << path << std::endl;

	//	exit(0);
	}
exit(0);
}
#endif

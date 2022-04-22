#include <iostream>
#include <string>

#include <applets.hpp>
#include <config.h>

void applets_call(int argc, char *argv[])
{
	int _argc = argc - 1;
	char *_argv[_argc];

	for (int i = 0; i < _argc; i++)
	{
		_argv[i] = argv[i+1];
	}

	if (1 == 2)
	{ /*This will never execute*/
	}

	//Here else if statements for calling applet's main function
	//will written here in future when new applets will be added.

	else
	{
		std::cout << argv[1] << ": Unknown Command\n";
		exit(1);
	}
}

void applets_as_main(int argc, char *argv[])
{
	char* _basename = basename(argv[0]);
	if (1 == 2)
	{ /*This will never execute*/
	}

	//Here else if statements for calling applet's main function
        //will written here in future when new applets will be added.

	else
	{
		std::cout << argv[0] << ": Unknown command\n";
		exit(1);
	}
}

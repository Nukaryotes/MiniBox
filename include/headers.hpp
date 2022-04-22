#include <iostream>

#include <config.h>
#include <applets.hpp>

#ifndef HEADERS
#define HEADERS

void usage(int exit_code)
{
	std::cout << "Usage:\n"
"minibox" " --version\n"
"minibox" " --help\n"
"minibox" " --list\n"
"minibox" " command [[arguments]...]\n\n"
"MiniBox is tool which can be used as an alternative for Busybox\n"
"and Toybox.\n\n"
"MiniBox Source Code <https://github.com/ayuzzh/MiniBox>\n"
"Report bugs in Github repository <https://github.com/ayuzzh/MiniBox>\n"
"Email Us for any doubts <kmayushkm@gmail.com>\n";
	exit(exit_code);
}

void version()
{
	std::cout <<
"MiniBox Version 0.1\n"
"This sodtware is still under development and is not yet ready for use in"
"productional purpose. Though can be used for educatinal purpose.\n\n"
"Written by Ayush K M\n";
	exit(0);
}

#endif

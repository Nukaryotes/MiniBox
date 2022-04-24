#include <config.h>

#ifndef APPLETS
#define APLLETS

int echo_main(int argc, char* argv[]);
int pwd_main(int argc, char* argv[]);

void applets_call(int argc, char* argv[]);
void applets_as_main(int argc, char* argv[]);
void usage(int exit_code);
void version();

#endif	/*APPLETS*/

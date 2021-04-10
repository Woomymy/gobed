#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int
main(int argc, char** argv)
{
	if (argc < 2)
	{
		fprintf(stderr, "\x1b[91mInvalid args!\x1b[m\n");
		/* TODO: call usage() */
		return EXIT_FAILURE;
	}
	int time = atoi(argv[1]);
	if (time == 0)
	{
		return EXIT_SUCCESS; /* Maybe time is NaN */
	}
	if (sleep(time) == 1)
	{
		fprintf(stderr, "\x1b[91mUnable to sleep! (maybe we need sleeping pills?)\x1b[m");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

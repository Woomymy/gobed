/*
 * Gobed
 * Copyright (C) 2021 Woomy4680-exe
 *
 * This file is part of SMRU.
 *
 * Gobed is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Gobed is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Gobed.  If not, see <http://www.gnu.org/licenses/>.
 */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int
main(int argc, char** argv)
{
	if (argc < 2)
	{
		fprintf(stderr, "\x1b[91mInvalid args!\x1b[m\n");
		/* TODO: call usage() */
		return EXIT_FAILURE;
	}
	int time = 0;
	int multiplier = 1; /* We use 1 because 0 is an absorbing number */
	unsigned long len = strlen(argv[1]);
	char suffix = argv[1][len - 1];
	short suffixed = 0;
	if (suffix == 'm')
	{
		multiplier = 60;
	}
	else if (suffix == 'h')
	{
		multiplier = 60 * 60;
	} 
	else if (suffix == 'd')
	{
		multiplier = 60 * 60 * 24;
	}
	char ntime[200];
	if (suffixed == 1) {
		int i = 0;
		for (i = 0; i < len - 1 ; i++)
		{
			ntime[i] = argv[1][i];
		}
		time = atoi(ntime);	
	} else {
		time = atoi(argv[1]);
	}
	time = time * multiplier;
	if (time == 0)
	{
		return EXIT_FAILURE; /* Maybe time is NaN */
	}
	if (sleep(time) == 1)
	{
		fprintf(stderr, "\x1b[91mUnable to sleep! (maybe we need sleeping pills?)\x1b[m");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

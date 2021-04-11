/*
 * Gobed
 * Copyright (C) 2021 Woomy4680-exe
 *
 * This file is part of Gobed.
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
#include "time.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "multiplier.h"
#include "usage.h"
int
main(int argc, char** argv)
{

	if (argc < 2)
	{
		fprintf(stderr, "\x1b[91mInvalid args!\x1b[m\n");
		usage();
		return EXIT_FAILURE;
	}
	if (sleep(get_time(argv[1])) == 1)
	{
		fprintf(stderr, "\x1b[91mUnable to sleep! (maybe we need sleeping pills?)\x1b[m");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

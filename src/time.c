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
#include <string.h>
#include "multiplier.h"
#include <stdlib.h>

int
get_time(char* time)
{
	short suffixed = 0;	
	unsigned long len = strlen(time);
	int multiplier = get_multiplier(time[len - 1]);
	
	char ntime[200];
	int t;
	if (suffixed == 1) {
		unsigned int i = 0;
		for (i = 0; i < len - 1 ; i++)
		{
			ntime[i] = time[i];
		}
		t = atoi(ntime);	
	} else {
		t = atoi(time);
	}
	t = t * multiplier;
	return t;
}

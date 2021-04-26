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
#include "../src/time.h"
#include <assert.h>
int
test_get_time(void);

int
main(void)
{
	return test_get_time();
}

int
test_get_time(void)
{
	assert(get_time("1") == 1);
	assert(get_time("2d") == (2 * 60 * 60 * 24));
	assert(get_time("20") == 20);
	return 0;
}

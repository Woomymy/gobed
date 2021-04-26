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
int
get_multiplier(char suffix)
{
	int multiplier = 1;
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
	return multiplier;
}

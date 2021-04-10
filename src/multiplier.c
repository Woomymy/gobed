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

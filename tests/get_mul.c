#include "../src/multiplier.h"

int
test_get_multiplier(void);

int
main(void)
{
	if (test_get_multiplier() == 1) return 1;
	return 0;
}

int
test_get_multiplier(void)
{
	if (get_multiplier('m') != 60) return 1;
	if (get_multiplier('h') != 60 * 60) return 1;
	if (get_multiplier('d') != (60 * 60 * 24)) return 1;
	if (get_multiplier('u') != 1) return 1; /* We expect get_multiplier to return one if suffix is invalid */
	return 0;
}

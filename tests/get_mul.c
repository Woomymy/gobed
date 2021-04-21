#include "../src/multiplier.h"
#include <assert.h>

int
test_get_multiplier(void);

int
main(void)
{
	return test_get_multiplier();
}

int
test_get_multiplier(void)
{
	assert(get_multiplier('m') == 60);
	assert(get_multiplier('h') == 60 * 60);
	assert(get_multiplier('d') == (60 * 60 * 24));
	assert(get_multiplier('u') == 1); /* We expect get_multiplier to return one if suffix is invalid */
	return 0;
}

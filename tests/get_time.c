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

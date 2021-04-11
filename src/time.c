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
		int i = 0;
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

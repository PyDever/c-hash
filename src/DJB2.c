
#include <stdio.h>
#include <string.h>

unsigned long DJB2 (unsigned char *str) {
	
	unsigned long hash = 5381;
	int c;

	while (c = *str++)
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return hash;
}

/*		TEST
int main (void) {

	unsigned long hash = DJB2("hello, world!");
	printf("%lu\n", hash);

	return 0;
}
*/


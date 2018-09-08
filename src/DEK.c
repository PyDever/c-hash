
#include <stdio.h>
#include <string.h>

unsigned long DEK (unsigned char *str) {

	unsigned int len = strlen(str);
	unsigned int hash = len;

	unsigned int i = 0;

	for (i = 0; i < len; ++str, ++i) {

		hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
	}
	return hash;
}


int main (void) {
	unsigned long hash = DEK("super secret password");

	printf("%lu\n", hash);
	return 0;
}



#include <stdio.h>
#include <string.h>

unsigned long KRH (unsigned char *str) {

	unsigned int len = strlen(str);
	unsigned int i = 0;

	unsigned long hash = len;

	for ( i = 0; i < len; ++str, ++i) {

		hash = ((hash << 4) ^ (hash >> 30)) ^ (*str);
	}
	return hash;
}

int main (void) {
	unsigned long hash = KRH("super secret password");

	printf("%lu\n", hash);
	return 0;
}


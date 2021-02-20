#include "longtohex.h"
#include <string>
const char* hex = "0123456789ABCDEF";

void swap(char* c) {
	char tmp;
	int j = strlen(c)-1;
	for (int i = 0; i < j; ++i, --j) {
		tmp = c[i];
		c[i] = c[j];
		c[j] = tmp;
	}
}


char* longtoah(long num, char* c) {
	
	for (int i = 0;; ++i) {
		int a = num % 16;
		c[i] = hex[a];
		num /= 16;
		if (!num)break;
	}
	swap(c);
	return c;
}


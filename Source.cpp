#include "longtohex.h"
#include <string>
#include <cmath>
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
	if(num<0){	
	}
	 for (int i = 0;; ++i) {
		int a = num % 16;
		c[i] = hex[a];
		num /= 16;
		if (!num)break;
	}
	swap(c);
	return c;
}

char* ltoab(long num, char* c) {
	char s[256] = {};
	for (int i = 0; i < (sizeof(num) * 8); ++i) {
		if ((num & 1 << (sizeof(num) * 8 - i - 1)) != 0) {
			c[i] = '1';
		}
		else {
			c[i] = '0';
		}
	}
	int n = 0;
	swap(c);
		for (int i = 0; i < (sizeof(num) * 8); i+=4) {
			int f = 0;
			for (int j = 0; j <4; j++) {
				int a = 0;
				int in = c[i + j] - '0';
				a = in * pow(2, j);
				f +=a;
			}
			s[n] = hex[f];
			n++;
		
		}
		swap(s);
		for (int i = 0; i < (sizeof(num) * 8); ++i) {
			c[i] = s[i];
		}
	return c;
}


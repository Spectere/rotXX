#include <stdio.h>
#include <stdlib.h>

main(int C, char** V) {
	int c, r = (C > 1 ? atoi(V[1]) : 13);
	for(;c>-1;c=getchar()) {
		if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
			c += r;
			c -= c > 122 && c - r >= 97 ? 26 : c > 90 && c - r <= 90 ? 26 : 0;
		}

		putchar(c);
	}
}


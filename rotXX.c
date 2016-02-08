#include <stdio.h>
#include <stdlib.h>

main(int C, char** V) {
	int c, r = (C > 1 ? atoi(V[1]) : 13);
	while((c = getchar()) != EOF) {
		if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
			c += r;
			c > 122 && c - r >= 97 ? c -= 26 : c > 90 && c - r <= 90 ? c -= 26 : c;
		}

		putchar(c);
	}
}


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int ch;
	int rot = 13;
	if(argc > 1) rot = atoi(argv[1]);
	if(rot > 26 || rot < 0) {
		printf("rot value cannot be greater than 26 or less than 0\n");
		return 1;
	}
	while((ch = getchar()) != EOF) {
		if((ch >= 65 &&	ch <= 90) || (ch >= 97 && ch <= 122)) {
			ch += rot;
			if(ch > 122 && ch - rot >= 97) ch -= 26;
			else if(ch > 90 && ch - rot <= 90) ch -= 26;
		}

		putchar(ch);
	}
	
	return 0;
}


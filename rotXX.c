#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int ch, rot = (argc > 1 ? atoi(argv[1]) : 13);
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


main(int C, char** V) {
	int c, r = (C > 1 ? atoi(V[1]) : 13);
	for(;c>-1;c=getchar())
		putchar((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ? c -= c + r > 122 ? 26 - r : c + r > 90 && c <= 90 ? 26 - r : -r : c);
}


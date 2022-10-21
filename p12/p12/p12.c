#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int square(int y);
int main()
{
	int x;
	for (int x = 1;x <= 10;x++) 
		printf("%d ", square(x));
	printf("\n");
	return 0;
}

int square(int y) {
	return y * y;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int x;
	for (int x = 1;x <= 10;x++) {
		printf("%.2f ",sqrt(x));
	}
	printf("\n");
	return 0;
}
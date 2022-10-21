#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Status {CONTINUE,WON,LOST};
int rollDice(void);
int main(void)
{
	int sum, myPoint;
	enum Status gameeStatus;
	srand(time(NULL));
	sum = rollDice();
	switch (sum) {
	case 7:
	case 11:
		gameeStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameeStatus = LOST;
		break;
	default:
		gameeStatus = CONTINUE;
		myPoint = sum;
		printf("Point is %d\n", myPoint);
		break;
	}
	while (gameeStatus == CONTINUE){
		sum = rollDice();
		if (sum == myPoint)
			gameeStatus = WON;
		else
			if (sum == 7)
				gameeStatus = LOST;
	}
	if (gameeStatus == WON)
		printf("Player wins\n");
	else
		printf("Player loses\n");
	return 0;
}
int rollDice(void) {
	int die1;
	int die2;
	int workSum;
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;
	printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}
#include <stdio.h>

typedef enum {North, East, South, West} directionT;

int main(void)
{
	directionT dirA = North;
	directionT dirB = East;
	directionT dirC = South;
	directionT dirD = West;
	printf("dirA=%d\n", North);
	printf("dirB=%d\n", East);
	printf("dirC=%d\n", South);
	printf("dirD=%d\n", West);
	return 0;
}

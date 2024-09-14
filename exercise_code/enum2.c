#include <stdio.h>
int main(void)
{
	typedef enum {
		Penny=1,
		Nickel=5,
		Dime=10,
		Quarter=25,
		HalfDollar=50
	} coinT;
	coinT nickel = Nickel;
	printf("Nickel=%d\n", Nickel);
	return 0;
}

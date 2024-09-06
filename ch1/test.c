/**
* 打印结构体占用内存的大小 
**/

#include <stdio.h>

int main(void)
{
	struct a {
		int i;
		char c;
		short int si;
	};

	struct a *pa;
	printf(" sizeof int = %d.\n", sizeof(int));
	printf(" sizeof char = %d.\n", sizeof(char));
	printf(" sizeof short = %d.\n", sizeof(short));
	printf(" sizeof struct a = %d.\n", sizeof(struct a));
	printf(" sizeof struct a point = %d.\n", sizeof(pa));
	return 0;
}

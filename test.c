#include <stdio.h>

int main(void)
{
	
	int a=8, *p;
	p = &a;
	printf("p = %p.\n", p);
	printf("*p = %d.\n", *p);
	printf("*p++ = %d.\n", *p++);
	printf("a = %d.\n", a);
	printf("p = %p.\n", p);
	return 0;
}

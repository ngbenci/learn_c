#include <stdio.h>
int main(void)
{
	int *pi = NULL;
	const int *pci = NULL;
	int a = -1;
	int b = 2; 
	pi = &a;
	printf("pi指向的值=%d\n", *pi);
	pci = &a;
	printf("pci指向的值=%d\n", *pci);
	pci = &b;
	printf("pci指向的值=%d\n", *pci);
	return 0;
}

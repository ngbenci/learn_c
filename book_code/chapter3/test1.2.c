#include <stdio.h>
int main(void)
{
	int *pi = NULL;
	const int *pci = NULL;
	int a = -1;
	int b = 2; 
	pi = &a;
	printf("piָ���ֵ=%d\n", *pi);
	pci = &a;
	printf("pciָ���ֵ=%d\n", *pci);
	pci = &b;
	printf("pciָ���ֵ=%d\n", *pci);
	return 0;
}

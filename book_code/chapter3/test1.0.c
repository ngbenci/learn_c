#include <stdio.h>
#define d_ptr_to_char char *
int main(void)
{
	char arr[5] = "hello"; 
	d_ptr_to_char a, b;
	b = 's';
	printf("%c\n", b);
	printf("%s\n", arr);
	return 0;
} 

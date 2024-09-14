#include <stdio.h>
#define IN 1
#define OUT 0 
int main(void)
{
	int ch;
	int state = OUT; 
	while((ch = getchar()) != EOF) {
		if(ch == ' ') {
			if(state == OUT) {
				putchar(ch);
				state = IN;
			}
		}else if(state == IN) {
			putchar(ch);
			state = OUT;
		}else {
			putchar(ch);	
		}

	}
	
	return 0;
}

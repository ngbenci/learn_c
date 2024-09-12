#include <stdio.h>
int main(void)
{
	int ch;
	int inside = 0;
	while((ch = getchar()) !=EOF)
	{
		if(ch == ' ')
		{
			if(inside == 0)
			{
				putchar(ch);
				inside = 1;
			}
		}
		if(ch != ' ')
		{
			putchar(ch);
			inside = 0;
		}
	}
	return 0;
} 

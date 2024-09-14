#include <stdio.h>
#define LEN 10
int main(void)
{
	int ch, i, nwhite, nother, ndigit[10];
	for (i=0; i<LEN; ++i)
	{
		ndigit[i]=0;
	}
	while((ch=getchar()) != EOF)
	{
		switch(ch)
		{
			case'0': case'1':case'2': case'3':case'4':
			case'5': case'6':case'7': case'8':case'9':
				ndigit[ch-'0']++;
				break;
			case ' ': case'\n': case '\t':
				nwhite++; 
				break;
			default:
				nother++;
				break;
		}
	
	}
	printf("digit=");
	for(i=0; i<LEN; ++i)
	{
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d.\n", nwhite, nother);
	return 0;
}

#include <stdio.h>
//在windows下ctrl-z是发送了信号结束输入 
int main(void)
{
//	printf("EOF = %d\n", EOF);
	printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
	return 0;
}

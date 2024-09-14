#include <stdio.h>
int main(void)
{
	int a,b,c;
	a=b=c=0;
	printf("please input 3 num:");	
	scanf("%d,%d,%d", &a, &b, &c);
	if(a>=c && b>=c){
		printf("max two is:%d,%d", a, b);	
	}
	else if(a>=b && c>=b) {
		printf("max two is:%d,%d", a, c);	
	}else {
		printf("max two is:%d,%d", c, b);
	}
	return 0;
}

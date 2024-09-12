#include <stdio.h>

typedef enum {North, East, South, West} directionT;
char north_arr[] = "north.";
char east_arr[] = "east.";
char south_arr[] = "south.";
char west_arr[] = "west.";
char illegal_arr[] = "illegal direction value.";
directionT right_from(directionT dir);
char* get_directionT_name(directionT dir);

int main(void)
{
	directionT n = North;
	directionT w = West;
	printf("north = %d\n", n);
	printf("north call right_from = %d\n", right_from(n));
	printf("West = %d\n",w);
	printf("West call right_from = %d\n", right_from(w));
	printf("%s\n", get_directionT_name(n));
	printf("%s\n", get_directionT_name(w));
	return 0;
}

directionT right_from(directionT dir)
{
	return ((dir+1)%4);
}

char* get_directionT_name(directionT dir)
{
	char* pn = north_arr;
	char* pe = east_arr;
	char* ps = south_arr;
	char* pw = west_arr;
	char* pi = illegal_arr;
	switch(dir)
	{
		case North: return pn; break;
		case East: return pe; break;
		case South: return ps; break;
		case West: return pw; break;
		default: return pi; break;
	}
}


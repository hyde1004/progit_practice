#include <stdio.h>
#include "3_1.h"

int main(int argc, char const *argv[])
{
	/* code */
	printf("Hello world, OTA first version\n");
	printf("%d div %d = %d\n", 2, 3, div(2,3));
	printf("%d add %d = %d\n", 2, 3, add(2,3));
	printf("%d mul %d = %d\n", 2, 3, mul(2,3));
	printf("%d minus %d =%d\n", 2, 3, minus(2,3));
	
	printf("end of main()");
	
	return 0;
}

int div(int a, int b)
{
	if (b==0)
		return -1;
	return a/b;
}

int add(int a, int b)
{
	return a+b;
}

int mul(int a, int b)
{
	return a*b;
}

int minus(int a, int b)
{
	return a-b;
}
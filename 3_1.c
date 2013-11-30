#include <stdio.h>
#include "3_1.h"

int main(int argc, char const *argv[])
{
	/* code */
	printf("Hello world\n");
	printf("%d div %d = %d\n", 2, 3, div(2,3));
	printf("%d add %d = %d\n", 2, 3, add(2,3));

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
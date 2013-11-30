#include <stdio.h>
#include "3_1.h"

int main(int argc, char const *argv[])
{
	/* code */
	printf("hello world\n");
	printf("%d div %d = %d\n", 2, 3, div(2,3));

	return 0;
}

int div(int a, int b)
{
	if (b==0)
		return -1;
	return a/b;
}
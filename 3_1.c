#include <stdio.h>
#include "div.h"

int div(int a, int b);
int main(int argc, char const *argv[])
{
	/* code */
	printf("hello world\n");
	printf("%d div %d = %d\n", 2, 3, div(2,3));
	
	return 0;
}

int div(int a, int b)
{
	return a/b;
}
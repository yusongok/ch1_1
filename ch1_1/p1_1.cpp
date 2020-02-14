#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*int* a, * b;
	a = (int*)malloc(sizeof(int));
	b = (int*)malloc(sizeof(int));
	*a = 1;
	*b = 2;
	printf("addr of a:%p,%p,%d\n", &a, a, *a);
	printf("addr of b:%p,%p,%d\n", &b, b, *b);
	return 0;*/
	int c[3] = { 1,2,3 };
	printf("cµÄµØÖ·£º%p\t%p\tc[0]:%p\tc[1]:%p\tc[2]:%p\t\n", c, &c, &c[0], &c[1], &c[2]);
	printf("%d,%d,%d\n", c[0], c[1], c[2]);
}
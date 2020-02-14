#include <stdio.h>
#include <stdlib.h>
//int func(int x)
//int(*f)(int x);
//f = func;
int sum(int a, int b)
{
	return(a+b);
}

int main(int argc, int*argv[])
{
	/*int* a, * b;
	a = (int*)malloc(sizeof(int));
	b = (int*)malloc(sizeof(int));
	*a = 1;
	*b = 2;
	printf("addr of a:%p,%p,%d\n", &a, a, *a);
	printf("addr of b:%p,%p,%d\n", &b, b, *b);
	return 0;*/
	//例子2
	//int c[3] = { 1,2,3 };
	//printf("c的地址：%p\t%p\tc[0]:%p\tc[1]:%p\tc[2]:%p\t\n", c, &c, &c[0], &c[1], &c[2]);
	//printf("%d,%d,%d\n", c[0], c[1], c[2]);
	//例3 函数指针
	int (*f)(int a, int b);
		f = &sum;
	int f_sum = f(2, 3);
	printf("f_sum:%d\n", f_sum);
	return 0;

}
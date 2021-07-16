#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = add(a, b);
	printf("%d\n", sum);
}
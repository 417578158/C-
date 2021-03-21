#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Odd(int x)
{
	int y;
	if(x % 2 != 0)
		printf("%d 奇数\n", x);
	return 0;
}
int main()
{
	int a = 1;
	while(a <= 100)
	{
		Odd(a);
		a++;
	}
	return 0;
}
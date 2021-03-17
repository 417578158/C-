#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)

		return x;
	else

		return y;
}
int main()
{
	int a = 34;
	int b = 24;
	int max = Max(a, b);
	printf("Max = %d\n", max);
	return 0;
}
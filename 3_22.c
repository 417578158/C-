#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char a[] = "Welcome to the world !!!";
	char b[] = "########################";
	int i = sizeof(a) / sizeof(a[0]) - 2;
	int j = 0;
	for(; j <= i; --i, j++)
	{
		b[i] = a[i];
		b[j] = a[j];
		printf("%s\n", b);
	}
	return 0;
}
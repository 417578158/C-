#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if(arr[mid] < a)
		{
			left = mid + 1;
		}
		else if(arr[mid] > a)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if(left > right)
	{
		printf("没找到\n");
	}
	return 0;
}
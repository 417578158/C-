#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (0 == strcmp(password, "417578158"))
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
	}
	if (3 == i)
	{
		printf("登录失败\n");
	}
	return 0;
}
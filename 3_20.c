#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book b1 = {"资本论", 50};
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	struct Book* pb1 = &b1;
	printf("书名：%s\n", (*pb1).name);
	printf("价格：%d\n", (*pb1).price);
	printf("书名：%s\n", pb1->name);
	printf("价格：%d\n", pb1->price);
	strcpy(b1.name, "毛泽东选集");
	b1.price = 70;
	printf("修改后的书名：%s\n", b1.name);
	printf("修改后的价格：%d\n", b1.price);
	return 0;
}
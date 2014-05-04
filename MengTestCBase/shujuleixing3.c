#include "shujuleixing3.h"

int testdefine()
{
	int num, total;
	num = 10;
	total = num*PRICE;
	return total;
}

//整型变量的定义与使用。
void sjlxtest3_2()
{
	int a, b, c, d;
	unsigned u;
	a = 12;
	b = -20;
	u = 10;
	c = a + u;
	d = b + u;

	printf("整型变量的定义与使用 a+u=%d, b+u= %d\n", c, d);
}

//整型数据的溢出
void sjlxtest3_3()
{
	int a, b;
	a = 2147483647;//32767(32位的);
	b = a + 1;
	printf("整型数据的溢出 a = %d, b = %d\n", a, b);
}

//类型转换
void sjlxtest3_4()
{
	long x, y;
	int a, b, c, d;
	x = 5;
	y = 6;
	a = 7;
	b = 8;
	c = x + a;
	d = y + b;
	printf("类型转换c=x+a=%d,d=y+b=%d\n",c,d);
}
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

//标准Ｃ允许浮点数使用后缀。后缀为“f”或“F”即表示该数为浮点数
void sjlxtest3_5(){
	printf("%f\n", 356.);
	printf("%f\n", 356);
	printf("%f\n", 356.f);
}

//实型数据的舍入误差。
void sjlxtest3_6(){
	float x;
	double y;

	float a,b;
	a = 123456.789e5;
	b = a + 20;
	printf("%f\n",a);
	printf("%f\n",b);
	
	x = 33333.33333;
	
	y = 33333.33333333333333;
	printf("x = %f\n,y=%f\n",x, y);
}
#include "shunxu4.h"
#include <math.h>

//输出单个字符。
void shunxu4_1()
{
	char a = 'B', b = 'o', c = 'k';
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	putchar(b);
	putchar(c);
	putchar('\n');
}

//输入单个字符。
void shunxu4_2()
{
	char c;
	printf("input a character\n");
	c = getchar();
	putchar(c);
}

void shunxu4_3()
{

}

void shunxu4_4()
{
	float b = 123.4567891234;
	double c = 12345768.12345678;
	printf("b = %5.4lf",b);
	printf("c = %8c\n", c);
}

void shunxu4_5()
{
	int i = 8;
	printf("%d\n", ++i);
	printf("%d\n", --i);
	printf("%d\n", i++);
	printf("%d\n", i--);
	printf("%d\n", -i++);
	printf("%d\n", -i--);
}

//scanf
void shunxu4_6()
{
	int a,b,c;
	printf("\nplease input a,b:");
	scanf("%d,%d,%5d", &a, &b, &c);
	printf("a= %d, b= %d, c= %d", a, b,c);
}

//输入三角形的三边长，求三角形面积。
void shunxu4_7()
{
	float a,b,c,s,area;
	scanf("%f,%f,%f",&a,&b,&c);
	s = 1.0/2*(a+b+c);
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f\n",a,b,c,s);
	printf("area=%7.2f",area);
}

//求ax2+bx+c=0方程的根，a,b,c由键盘输入，设b2-4ac>0。
void shunxu4_8()
{
	float a,b,c,disc,x1,x2,p,q;
	printf("输入a,b,c:\n");
	scanf("a=%f,b=%f,c=%f",&a,&b,&c);
	printf("\na=%f,b=%f,c=%f\n",a,b,c);
	disc = b*b - 4*a*c;
	p = -b/(2*a);
	q = sqrt(disc)/(2*a);
	x1 = p+q;
	x2 = p-q;
	printf("\nx1=%5.2f\nx2=%5.2f\n", x1, x2);
}



#include "shujuleixing3.h"

int testdefine()
{
	int num, total;
	num = 10;
	total = num*PRICE;
	return total;
}

//���ͱ����Ķ�����ʹ�á�
void sjlxtest3_2()
{
	int a, b, c, d;
	unsigned u;
	a = 12;
	b = -20;
	u = 10;
	c = a + u;
	d = b + u;

	printf("���ͱ����Ķ�����ʹ�� a+u=%d, b+u= %d\n", c, d);
}

//�������ݵ����
void sjlxtest3_3()
{
	int a, b;
	a = 2147483647;//32767(32λ��);
	b = a + 1;
	printf("�������ݵ���� a = %d, b = %d\n", a, b);
}

//����ת��
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
	printf("����ת��c=x+a=%d,d=y+b=%d\n",c,d);
}
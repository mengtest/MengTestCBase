#include "TestCMain.h"


void main() //������
{
	int x, y, z; /*����˵�� */
	printf("input two numbers(������2������):\n");
	scanf("%d%d", &x, &y); /* ����ֵ*/
	z = max(x, y); /*���ú���*/
	printf("maxnum=%d", z);//���

	//printf("Test\n");
}

int max(int a, int b)
{
	if(a>b){
		return a;
	}
	else 
	{
		return b;
	}
}
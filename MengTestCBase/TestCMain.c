#include "TestCMain.h"


void main() //主函数
{
	int x, y, z; /*变量说明 */
	printf("input two numbers(请输入2个数字):\n");
	scanf("%d%d", &x, &y); /* 输入值*/
	z = max(x, y); /*调用函数*/
	printf("maxnum=%d", z);//输出

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
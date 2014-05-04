#include "suanfa2.h"

/*
Nikiklaus Wirth提出的公式：

数据结构+算法=程序
教材认为:
程序=算法+数据结构+程序设计方法+语言工具和环境
*/

//求1×2×3×4×5用C语言表示。
int sfjiecheng()
{
	int i,t;
	t = 1;
	i = 2;
	while(i<=5)
	{
		t = t*i;
		i = i+1;
	}
	return t;
}

//求级数的值。
float sfjishu()
{
	int sigh = 1;
	float deno = 2.0, sum = 1.0, term;
	while (deno <= 100)
	{
		sigh = -sigh;
		term = sigh/deno;
		sum = sum + term;
		deno = deno + 1;
	}
	return sum;
}

#include "suanfa2.h"

/*
Nikiklaus Wirth����Ĺ�ʽ��

���ݽṹ+�㷨=����
�̲���Ϊ:
����=�㷨+���ݽṹ+������Ʒ���+���Թ��ߺͻ���
*/

//��1��2��3��4��5��C���Ա�ʾ��
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

//������ֵ��
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

#include "shuzu7.h"
#include <stdio.h>
#include <string.h>

//一维数组
void shuzu7_1()
{
	int i;
	int a[] = {1,2,3,4,5};
	printf("//一维数组\n");
	for(i=0; i<5; i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
//二维数组
void shuzu7_2()
{
	int i, j;
	int a[5][3] = {{1,2,3},{23,42,12},{7,1,9},{89,2,5},{19,80,29}};
	int b[2][2] = {1,2,3,4};

	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
		}
	}
	printf("====b[i][j]==\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("b[%d][%d]=%d\n",i,j,b[i][j]);
		}
	}

}

void shuzu7_3()
{
	char c[] = {'a', 'D', 'J', 'k'};
	int i=0;
	for(;i<4;i++)
	{
		printf("c[%d]=%c\n", i, c[i]);
	}
	printf("c=%s\n",c);
}

void shuzu7_4()
{
	char str[15];
	char str2[] = "string:";
	int k;
	char str3[] = "dsfasdf";

	printf("input string\n");
	gets(str);
	puts(str);

	gets(str);
	//strcat(str2, str);
	strcpy(str2, str);
	puts(str2);

	
	k = strcmp(str3, str2);
	if(k == 0) printf("k====0");
	if(k>0) printf("str3>str2");
	if(k<0) printf("str3<str2");
}
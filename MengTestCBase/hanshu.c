#include "hanshu.h"

#define AAA ok

//使用寄存器变量。
void hanshu8_17(int n)
{
	register int i,f=1;
	for(i=1; i<=n; i++)
	{
		f = f*i;
	}
	printf("n==%d",f);

#ifdef AAA
	printf("A");
#else
	printf("!A");
#endif
}
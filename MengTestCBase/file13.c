#include "file13.h"
#include <stdio.h>

void file13_1()
{
	FILE *fp;
	char ch;
	if((fp=fopen("d:\\t\\t.txt","rt"))==NULL)
	{
		printf("\nCannot Open File strike any key exit!");
		getch();
		exit(1);
	}
	else
	{
		printf("\n");
		ch = fgetc(fp);
		while(ch != EOF)
		{
			putchar(ch);
			ch = fgetc(fp);
		}
		
	}
	fclose(fp);
}

void file13_2()
{
	FILE *fp;
	char ch;
	if((fp=fopen("d:\\t\\t2.txt","wt+"))==NULL)
	{
		printf("\nCannot Open File strike any key exit!");
		getch();
		exit(1);
	}

	printf("input a String:\n");
	ch = getchar();
	while(ch!='\n')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	rewind(fp);
	ch = fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	fclose(fp);
}

void file13_3()
{

}

void file13_4()
{

}

void file13_5()
{

}
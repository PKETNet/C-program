#include <stdio.h>
#include <math.h>
long fib(int n);

/*--get fibonacci number--*/
/*--Param n: index--*/
long fib(int n)
{
	/*--Written by @PKETNet visit: https://github.com/PKETNet--*/
	long all[10000];/*Arrary to save fibonacci number*/
	int i;
	all[0]=1; all[1]=1;
/*Calculate each fibonacci number and save it in the array*/
	for(i=2;i<=n-1;i++)
	{
		all[i]=all[i-1] + all[i-2];
	}

	return all[n-1];/*Returnthe last fibonacci number*/
}
/*
Enter two numbers 1<=m, n<=10000. Print out all the fibonacci numbers between the two numbers
fibonacci numbers={0,1,1,2,3,5,8,13,21,34.....}
*/
void main()
{
	int i, m, n;
	long f;
	i=1;/*Counter*/
	scanf("%d%d", &m,&n);
	while(1)
	{
		f=fib(i);/*return No. i*/
		if(f>n) break; 
		if(m<=f)
		{
			printf("%1d", f);
			printf("\n");
		}
		i++;/*Calculate the next fibonacci number*/
	}
	
}

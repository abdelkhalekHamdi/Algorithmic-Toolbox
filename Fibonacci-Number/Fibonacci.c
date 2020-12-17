/////////////////////////////////////////////
//Description: Given an integer n, find the nth Fibonacci number Fn .
////>Input: The input consists of a single integer n.
////>Output: Fn.
//Other: Naive implementation
//Author : ABDELKHALEK HAMDI
/////////////////////////////////////////////
#include <stdio.h>

long long Fib(int n)
{
	if(n<= 1)
		return n;
	else
		return Fib(n-1) + Fib(n-2);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld\n", Fib(n));

	return 0;
}

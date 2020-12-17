/////////////////////////////////////////////
//Description: Given an integer n, find the nth Fibonacci number Fn .
////>Input: The input consists of a single integer n.
////>Output: Fn.
//Other: Fast implementation
//Author : ABDELKHALEK HAMDI
/////////////////////////////////////////////
#include <stdio.h>

long long FibFast(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld\n", FibFast(n));
	return 0;
}

long long FibFast(int n)
{
	long long FibSequence[n+1];
	FibSequence[0]=0;
	FibSequence[1]=1;
	for (int i=2; i<=n; i++)
		FibSequence[i] = FibSequence[i-1]+FibSequence[i-2];
	return FibSequence[n];

}

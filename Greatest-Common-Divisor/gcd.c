/////////////////////////////////////////////
//Description: Given two integers a and b, find their greatest common divisor.
////>Input: two integers a, b given in the same line separated by space.
////>Output: GCD(a, b).
//Other: Naive implementation
//Author : ABDELKHALEK HAMDI
/////////////////////////////////////////////
#include <stdio.h>

long long gcd(long long a, long long b)
{
	long long int d, best;
	best = 0;
	if(a < 1 || b < 1)
		return -1;
	else
		for(d=1; d<=a+b; d++)
			if(!(a%d) && !(b%d))
				best = d;
	return best;
}

int main()
{
	long long result;
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld \n", gcd(a, b));
	return 0;
}

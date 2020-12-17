/////////////////////////////////////////////
//Description: Given two integers a and b, find their greatest common divisor.
////>Input: two integers a, b given in the same line separated by space.
////>Output: GCD(a, b).
//Other: Fast implementation
//Author : ABDELKHALEK HAMDI
/////////////////////////////////////////////
#include <stdio.h>

long long gcdFast(long long a, long long b)
{
	long long r;
	if(b == 0)
		return a;
	else 
		return gcdFast(b, a%b);

}

int main()
{
	long long result;
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld \n", gcdFast(a, b));
	return 0;
}

/////////////////////////////////////////////
//Description: Given two integers a and b, find their greatest common divisor.
////>Input: two integers a, b given in the same line separated by space.
////>Output: GCD(a, b).
//Other: Naive implementation
//Author : ABDELKHALEK HAMDI
/////////////////////////////////////////////
#include <stdio.h>

long long int gcdFast(long long int a, long long int b)
{
	long long int r;
	if(b == 0)
		return a;
	else 
		return gcdFast(b, a%b);

}

int main()
{
	long long int result;
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld \n", gcdFast(a, b));
	return 0;
}

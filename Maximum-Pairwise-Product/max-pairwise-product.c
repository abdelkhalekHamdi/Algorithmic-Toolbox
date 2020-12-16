/////////////////////////////////////////////
//Description: Find the maximum product of two distinct numbers in a sequence of non-negative integers.
////>Input: A sequence of non-negative integers.
////>Output: The maximum value that can be obtained by multiplying two different elements from the sequence.
//Other: Naive implementation
//Author : ABDELKHALEK HAMDI
/////////////////////////////////////////////
#include <stdio.h>

int max( int a, int b);
int MaxPairwiseProduct(int inputArray[], int size);

int main()
{
	int i;

	//initialize input size
	int size;
	scanf("%d", &size);

	//initilize input content
	int inputArray[size];
	for(i=0; i<size; i++)
		scanf("%d", &inputArray[i]);

	//output the result
	printf("%d\n", MaxPairwiseProduct(inputArray, size));
	return 0;
}

int max( int a, int b)
{
	if(a>b)
		return a;
	else 
		return b;
}

int MaxPairwiseProduct( int inputArray[], int size)
{
	int result = 0;
	for(int i=0; i<size; i++)
		for(int j=i+1; j<size; j++)
			result = max(result, inputArray[i]*inputArray[j]);
	return result;
}

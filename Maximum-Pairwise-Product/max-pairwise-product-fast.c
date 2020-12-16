/////////////////////////////////////////////
//Description: Find the maximum product of two distinct numbers in a sequence of non-negative integers.
////>Input: A sequence of non-negative integers.
////>Output: The maximum value that can be obtained by multiplying two different elements from the sequence.
//Other: Fast implementation
//Author : ABDELKHALEK HAMDI
/////////////////////////////////////////////
#include<stdio.h>

long long maxPaiwiseProductFast(long long inputArray[], long long size);

int main()
{
	long long i;
	//initialize input size
	long long size;
	scanf("%lld", &size);
	//initilize input content
	long long inputArray[size];
	for(i=0; i<size; i++)
		scanf("%lld", &inputArray[i]);
	//output the result
	printf("%lld\n", maxPaiwiseProductFast(inputArray, size));
	return 0;
}

long long maxPaiwiseProductFast(long long inputArray[], long long size)
{
	long long i, index1 , index2;
	index1 = index2 = 0;
	// find the first maximum
	for(i = 1; i<size; i++)
		if(inputArray[index1]<inputArray[i])
			index1 = i;
	// find the second maximum
	for(i = 1; i<size; i++)
		if(inputArray[i] != inputArray[index1] && inputArray[index2]<inputArray[i])
			index2 = i;

	return inputArray[index2]*inputArray[index1];
	
}

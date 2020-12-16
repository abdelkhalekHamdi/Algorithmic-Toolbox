/////////////////////////////////////////////
//Description: Find the maximum product of two distinct numbers in a sequence of non-negative integers.
////>Input: A sequence of non-negative integers.
////>Output: The maximum value that can be obtained by multiplying two different elements from the sequence.
//Other: Faster implementation
//Author : ABDELKHALEK HAMDI
/////////////////////////////////////////////
#include<stdio.h>

long long maxPaiwiseProductFaster(long long inputArray[], long long size);

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
	printf("%lld\n", maxPaiwiseProductFaster(inputArray, size));
	return 0;
}

long long maxPaiwiseProductFaster(long long inputArray[], long long size)
{
	long long i, maxIndex, temp;
	//index of maximum element
	maxIndex = 0;
	//search for the first max element
	for(i=1; i<size; i++)
		if(inputArray[maxIndex]<inputArray[i])
			maxIndex = i;
	//move the first max element to the end of the array	
	temp = inputArray[maxIndex];
	inputArray[maxIndex] = inputArray[size-1];
	inputArray[size-1] = temp;

	//repeat with the second max element
	maxIndex = 0;
	for(i=1; i<size-1; i++)
		if (inputArray[maxIndex]<inputArray[i])
				maxIndex = i;		
	temp = inputArray[maxIndex];
	inputArray[maxIndex] = inputArray[size-1];
	inputArray[size-2] = temp;
	
	return inputArray[size-2]*inputArray[size-1];
}

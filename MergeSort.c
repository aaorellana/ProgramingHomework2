#include <math.h>
#include <stdio.h>
#include <limits.h>
#include "MergeSort.h"

//splits the array into sub arrays to sort them
void mergeSort(int *Array, int begining, int end)
{
	int middle;
	if(begining < end)
	{
		middle = floor((begining + end) / 2);
		mergeSort(Array, begining, middle);
		mergeSort(Array, middle + 1, end);
		merge(Array, begining, middle, end);
	}
}

//combines the elements into the original array in sorted order
void merge(int *Array, int begining, int middle, int end)
{
	int i;
	int j;
	int k;
	int n1 = middle - begining + 1;
	int n2 = end - middle;
	int leftArray[n1 + 1];
	int rightArray[n2 + 1];
	//stores the left part of the array into a new array
	for(i = 1; i <= n1; i++)
	{
		leftArray[i] = Array[begining + i - 1];
	}
	//stores the right part of the array into a new array
	for(j = 1; j <= n2; j++)
	{
		rightArray[j] = Array[middle + j];
	}

	leftArray[n1 + 1] = INT_MAX;
	rightArray[n2 + 1] = INT_MAX;
	i = 1;
	j = 1;
	//puts the elements in sorted order into the original array
	for(k = begining; k <= end; k++)
	{
		if(leftArray[i] <= rightArray[j])
		{
			Array[k] = leftArray[i];
			i = i + 1;
		}
		else
		{
			Array[k] = rightArray[j];
			j = j + 1;
		}
	}
	
	
} 
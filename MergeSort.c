#include <math.h>
#include <stdio.h>
#include "MergeSort.h"

//splits the array into sub arrays to sort them
void mergeSort(int *array, int p, int r)
{
	int q;
	if(p < r)
	{
		q = floor((p + r) / 2);
		mergeSort(array, p, q);
		mergeSort(array, q + 1, r);
		merge(array, p, q, r);
	}
}

//combines the elements into the original array in sorted order
void merge(int *array, int p, int q, int r)
{
	int i;
	int j;
	int k;
	int n1 = q - p + 1;
	int n2 = r - q;
	int leftArray[n1 + 1];
	int rightArray[n2 + 1];
	//stores the left part of the array into a new array
	for(i = 1; i <= n1; i++)
	{
		leftArray[i] = array[p + i - 1];
	}
	//stores the right part of the array into a new array
	for(j = 1; j <= n2; j++)
	{
		rightArray[j] = array[q + j];
	}

	leftArray[n1 + 1] = 123456;
	rightArray[n2 + 1] = 123456;
	i = 1;
	j = 1;
	//puts the elements in sorted order into the original array
	for(k = p; k <= r; k++)
	{
		if(leftArray[i] <= rightArray[j])
		{
			array[k] = leftArray[i];
			i = i + 1;
		}
		else
		{
			array[k] = rightArray[j];
			j = j + 1;
		}
	}
	
	
} 
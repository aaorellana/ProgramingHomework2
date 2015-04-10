//Andres Orellana
//Tests
#include <stdio.h>
#include <assert.h>
#include "MergeSort.h"

int main(void)
{  
	int unsorted1[6] = {0, 3, 2, 4, 1, 5}; 
	int sorted[6] = {0, 1, 2, 3, 4, 5}; 
	int unsorted2[6] = {0, 32, 12, 47, 68, 20};
	int sorted1[6] = {0, 12, 20, 32, 47, 68};
	int unsorted3[6] = {0, 1, 36, 5, 2, 24};
	int sorted2[6] = {0, 1, 2, 5, 24, 36};
	
	//sorts the unsorted arrays
	mergeSort(unsorted1, 1, 6);
	mergeSort(unsorted2, 1, 6);
	mergeSort(unsorted3, 1, 6);

	
	//compares the same index of the sorted and unsorted array
	//they all should equal since the unsorted should be sorted now
	assert(sorted[0] == unsorted1[0]);
	assert(sorted[4] == unsorted1[4]);
	assert(sorted[2] == unsorted1[2]);
	
	assert(sorted1[0] == unsorted2[0]);
	assert(sorted1[4] == unsorted2[4]);
	assert(sorted1[2] == unsorted2[2]);
	
	assert(sorted2[1] == unsorted3[1]);
	assert(sorted2[3] == unsorted3[3]);
	assert(sorted2[2] == unsorted3[2]);
	
	return 0;
}
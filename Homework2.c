//Andres Orellana
//Insertion Sort
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "MergeSort.h"


int main(int argc, char *argv[])
{   
	char *func = argv[1];
	int i;
	int newar[argc - 2];
	int size = argc - 2;
	
	//sets the arguments for the new array to pass to the function
	for(i = 0; i < size; i++)
	{
		newar[i] = strtol(argv[i + 2], NULL, 10);
	}
	
	switch(func[0])
    {
    	case 'm': mergeSort(newar, 1, 5);
    		break;
    	default: puts("command not found");
    	
    }
    
    //prints out array
    for(i = 0; i < size; i++)
	{
		printf("%d ", newar[i]);
	}
	puts("\n");
	
	return 0;
}
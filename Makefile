CFLAGS=-Wall -g

clean:
	rm -f MergeSort
	rm -f TestsHomework2
	rm -f Homework2
	
all:
	gcc -o Homework2 Homework2.c MergeSort.h MergeSort.c -lm
	gcc -o TestsHomework2 TestsHomework2.c MergeSort.h MergeSort.c -lm
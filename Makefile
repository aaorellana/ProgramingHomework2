CFLAGS=-Wall -g

all:
	gcc -o Homework2 Homework2.c MergeSort.h MergeSort.c -lm
	gcc -o TestsHomework2 TestsHomework2.c MergeSort.h MergeSort.c -lm

clean:
	rm -f MergeSort
	rm -f TestsHomework2
	rm -f Homework2
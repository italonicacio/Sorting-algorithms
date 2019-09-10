test: bubble_sort.o test.o
	gcc bubble_sort.o test.o -o test

bubble_sort.o: bubble_sort.c
	gcc -c bubble_sort.c

test.o:	test.c
	gcc -c test.c 

.PHONY: clean

clean:
	rm *.o test
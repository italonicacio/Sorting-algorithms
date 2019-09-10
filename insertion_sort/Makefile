test: insertion_sort.o test.o
	gcc insertion_sort.o test.o -o test
	
insertion_sort.o: insertion_sort.c
	gcc -c insertion_sort.c

test.o:	test.c
	gcc -c test.c 

.PHONY: clean

clean:
	rm *.o test
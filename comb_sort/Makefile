test: comb_sort.o test.o
	gcc comb_sort.o test.o -o test

bubble_sort.o: comb_sort.c
	gcc -c comb_sort.c

test.o:	test.c
	gcc -c test.c 

.PHONY: clean

clean:
	rm *.o test
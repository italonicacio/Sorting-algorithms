test: selection_sort.o test.o
	gcc selection_sort.o test.o -o test
	
selection_sort.o: selection_sort.c
	gcc -c selection_sort.c

test.o:	test.c
	gcc -c test.c 

.PHONY: clean

clean:
	rm *.o test
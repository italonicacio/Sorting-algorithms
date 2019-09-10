#include <stdio.h>
#include "insertion_sort.h"

#define SIZE 18000

int main(void) {

  int array[SIZE];
  int i;
  int aux = SIZE;

  for(i = 0; i < SIZE; i++)
  {
      array[i] = aux;
      aux--;
  }
    

  PrintArray(array, SIZE);

  InsertionSort(array, SIZE);
  
  PrintArray(array, SIZE);
    
  return 0;
}
#include <stdio.h>
#include "selection_sort.h"

#define SIZE 100

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

  SelectionSort(array, SIZE);
  
  PrintArray(array, SIZE);
    
  return 0;
}
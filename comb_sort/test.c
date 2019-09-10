#include <stdio.h>
#include "comb_sort.h"

#define SIZE 80

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

  CombSort(array, SIZE);
  
  PrintArray(array, SIZE);
    
  return 0;
}
#include <stdio.h>
#include "bubble_sort.h"

#define SIZE 5

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

  BubbleSort(array, SIZE);
  
  PrintArray(array, SIZE);
    
  return 0;
}
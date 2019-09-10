#include "stdio.h"
#include "selection_sort.h"

void SelectionSort(int *array, int size)
{
    int i,j, min, aux;
    for(i = 0; i< size; i++)
    {
        min = i;
  
        for(j = i+1; j<size; j++)
        {  
            if(array[min] > array[j] )
                min = j;             
        }

        if(array[i] != array[min])
        {
          aux = array[min];
          array[min] = array[i];
          array[i] = aux;
        } 
         
    }
}

void PrintArray(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}
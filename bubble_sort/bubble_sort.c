#include <stdio.h>
#include "bubble_sort.h"

#define FALSE 0
#define TRUE 1

void BubbleSort(int *array, int size)
{
    int i, bool, aux;
    do{
        bool = FALSE;
        for(i = 0; i < size; i++)
        {
            if(array[i]>array[i+1])
            {
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;

                bool = TRUE;
            }
        }

    }while ( bool ); 
}

void PrintArray(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}
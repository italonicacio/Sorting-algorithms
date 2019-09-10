#include <stdio.h>
#include <math.h>
#include "comb_sort.h"

#define FALSE 0
#define TRUE 1
#define SHRINK 1.3
void CombSort(int *array, int size)
{
    int i, j, bool, aux;

    int interval = size;
    
    do{
        interval = (int)(interval / SHRINK);
        
        bool = FALSE;

        for(i = 0, j = interval; j < size; i++ , j++)
        {      
            if(array[i] > array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;

                bool = TRUE;
            }
        }

    }while ( bool || interval > 1 ); 
}

void PrintArray(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}
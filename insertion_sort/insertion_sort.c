#include <stdio.h>
#include "insertion_sort.h"

void InsertionSort(int *array, int size)
{
    int i,j, key;
    for(i = 0; i < size; i++)
    {
        key = array[i];
        j = i-1;
        while(j >= 0 && (key < array[j]))
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1] = key;
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
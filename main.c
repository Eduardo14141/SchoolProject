#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "random_numbers.h"
#include "sort_algorithms.h"
#define SIZE_OF_ARRAY 50000
double *array;
double *array2;

void startArray();
void restore();

int main()
{
    startArray();
    printf("\n%ld", shellSort(array2, SIZE_OF_ARRAY));
    restore();

    printf("\n%ld",bubbleSort(array2, SIZE_OF_ARRAY));
    restore();

    printf("\n%ld",selectionSort(array2, SIZE_OF_ARRAY));
    restore();

    printf("\n%ld", insertionSort(array2, SIZE_OF_ARRAY));
    restore();

    printf("\n%ld", quickSort(array2, SIZE_OF_ARRAY));


    return 0;
}


void startArray()
{
    setSeed();
    array=(double*)malloc(sizeof(double)*SIZE_OF_ARRAY);
    array2=(double*)malloc(sizeof(double)*SIZE_OF_ARRAY);
    fillArray(array, SIZE_OF_ARRAY);
    restore();
}

void restore()
{
    memcpy(array2, array, SIZE_OF_ARRAY * sizeof(double));
}

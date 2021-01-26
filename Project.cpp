#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "random_numbers.h"
#include "sort_algorithms.h"
#define SIZE_OF_ARRAY 50
double *array;
double *array2;

void startArray();
void duplicate();

int main()
{
	startArray();
	shellSort(array2, SIZE_OF_ARRAY);
	printf("\tDesordenado\t\tOrdenado\n\n");
	for(int i=0; i<SIZE_OF_ARRAY ; i++)
		printf("\t%lf\t\t%lf\n", array[i], array2[i]);
	system ("pause");
	return 0;
}


void startArray()
{
	setSeed();
	array=(double*)malloc(sizeof(double)*SIZE_OF_ARRAY);
	array2=(double*)malloc(sizeof(double)*SIZE_OF_ARRAY);
	fillArray(array, SIZE_OF_ARRAY);
	duplicate();
}

void duplicate()
{
	memcpy(array2, array, SIZE_OF_ARRAY * sizeof(double));
}

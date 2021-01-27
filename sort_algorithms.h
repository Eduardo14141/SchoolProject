#include <time.h>

clock_t time1;

void swap(double*x, double*y)
{
	double aux = *x;
	*x = *y;
	*y = aux;
}
clock_t bubbleSort(double *array, unsigned int size, unsigned long *pointer)
{
	time1=clock();
	char stop;
	for(int i =0; i<size ; i++)
	{
		stop = 1;
		for(int j =0 ; j<size-i-1 ; j++)
		{
			if(array[j+1]<array[j])
			{
				swap(&array[j], &array[j+1]);
				stop = 0;
			}
			(*pointer)++;
		}
		if(stop)
			break;
	}
	return clock()-time1;
}
clock_t selectionSort(double *array, unsigned int size, unsigned long *pointer)
{
	time1=clock();
	int min;
	for(int i=0; i<size-1 ; i++)
	{
		min = i;
		for(int j=1+i ; j<size ; j++)
		{
			if(array[j]<array[min])
			{
				min = j;
			}
			(*pointer)++;
		}
		swap(&array[min], &array[i]);
	}
	return clock()-time1;
}
clock_t insertionSort(double *array, unsigned int size, unsigned long *pointer)
{
	time1=clock();
	for(int i=0 ; i<size-1 ; i++)
	{
		for(int j=i+1; j>0 ; j--)
		{
			if(array[j-1]>array[j])
				swap(&array[j], &array[j-1]);
				
			(*pointer)++;
		}
	}
	return clock()-time1;
}
clock_t quickSort(double *array, unsigned int size, unsigned long *pointer)
{
	clock_t time2=clock();
	unsigned int pivot = 0, size_tmp = size - 1;

    for (unsigned int i = 1; i < size && size_tmp >= i;) {
        if(array[i] < array[pivot]) {
            swap(&array[i], &array[pivot]);
            pivot = i++;
        } else
            swap(&array[i], &array[size_tmp--]);
            (*pointer)++;
    }
    //Quicksort Left
    if(pivot > 0)
        quickSort(array, pivot, pointer);

    //Quicksort right
    if(pivot < size - 1)
        quickSort(array + pivot + 1, size - pivot - 1, pointer);
        return clock()-time2;
}

clock_t shellSort(double *array, unsigned int size, unsigned long *pointer)
{
	time1=clock();
	int j=0;
	unsigned int gap =  size/2;
	while(gap > 0)
	{
		for(int i=gap ; i<size ; i++)
		{
			for(j= 0; i-j>0 ; j+=gap)
			{
				if(array[i]<array[j])
					swap(&array[j], &array[i]);
					(*pointer)++;
			}
		}
		gap/=2;
	}
	return clock()-time1;
}





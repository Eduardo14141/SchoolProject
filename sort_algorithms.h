

void swap(double*x, double*y)
{
	double aux = *x;
	*x = *y;
	*y = aux;
}
void bubbleSort(double *array, unsigned int size)
{
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
		}
		if(stop)
			break;
	}
}
void selectionSort(double *array, unsigned int size)
{
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
		}
		swap(&array[min], &array[i]);
	}
}
void insertionSort(double *array, unsigned int size)
{
	for(int i=0 ; i<size-1 ; i++)
	{
		for(int j=i+1; j>0 ; j--)
		{
			if(array[j-1]>array[j])
				swap(&array[j], &array[j-1]);
		}
	}
}

void quickSort(double *array, unsigned int size)
{
    unsigned int pivot = 0, size_tmp = size - 1;

    for (unsigned int i = 1; i < size && size_tmp >= i;) {
        if(array[i] < array[pivot]) {
            swap(&array[i], &array[pivot]);
            pivot = i++;
        } else
            swap(&array[i], &array[size_tmp--]);
    }
    //Quicksort Left
    if(pivot > 0)
        quickSort(array, pivot);

    //Quicksort right
    if(pivot < size - 1)
        quickSort(array + pivot + 1, size - pivot - 1);
}

void shellSort(double *array, unsigned int size)
{
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
			}
		}
		gap/=2;
	}
}






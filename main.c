#include "random_numbers.h"
#include "sort_algorithms.h"
#include "sort6file.h"

#define SIZE_OF_ARRAY 10000

struct sort_responses {
    clock_t time;
    unsigned long iterations;
    char * name;
};

void startArray();
void restoreArray2();
void addResponse(struct sort_responses * responses, clock_t time, char * name, short index);
void sortResponsesByIterations(struct sort_responses * responses, short length);
void sortResponsesByTime(struct sort_responses * responses, short length);

unsigned long iterations;
double *array;
double *array2;



int main()
{
    startArray();

    struct sort_responses * responses = (struct sort_responses *) malloc(sizeof(struct sort_responses) * 5);

    FILE * file = open_file("SORT_ANALYSIS.txt");

    write2File(file,
               "\rConsideraciones:\r\t"
                    "1.- Se usó el mismo set de números para cada método de ordenamiento\r\t"
                    "2.- Es posible que los algoritmos ejecutados al final sean beneficiados"
                    "puesto que la máquina \"ya calentó\"");

    write2File(file, "\n\rArreglo desordenado\n");
    array2char(array2, SIZE_OF_ARRAY, file);

    clock_t lapse = bubbleSort(array2, SIZE_OF_ARRAY, &iterations);
    addResponse(responses, lapse, "Bubble sort", 0);
    restoreArray2();

    lapse = selectionSort(array2, SIZE_OF_ARRAY, &iterations);
    addResponse(responses, lapse, "Selection sort", 1);
    restoreArray2();

    lapse = insertionSort(array2, SIZE_OF_ARRAY, &iterations);
    addResponse(responses, lapse, "Insertion sort", 2);
    restoreArray2();

    lapse = quickSort(array2, SIZE_OF_ARRAY, &iterations);
    addResponse(responses, lapse, "Quick sort", 3);
    restoreArray2();

    lapse = shellSort(array2, SIZE_OF_ARRAY, &iterations);
    addResponse(responses, lapse, "Shell sort", 4);

    sortResponsesByIterations(responses, 5);
    write2File(file, "\n\rOrdenados por iteraciones:\n");
    for (int i = 0; i < 5; ++i) {
        writeDataToFile(file, responses[i].name, responses[i].time, responses[i].iterations);
    }

    sortResponsesByTime(responses, 5);
    write2File(file, "\n\rOrdenados por Tiempo:\n");
    for (int i = 0; i < 5; ++i) {
        writeDataToFile(file, responses[i].name, responses[i].time, responses[i].iterations);
    }

    closeFile(file);
    return 0;
}

void startArray()
{
    setSeed();
    array=(double*)malloc(sizeof(double)*SIZE_OF_ARRAY);
    array2=(double*)malloc(sizeof(double)*SIZE_OF_ARRAY);
    fillArray(array, SIZE_OF_ARRAY);
    restoreArray2();
}

void addResponse(struct sort_responses * responses, clock_t time, char * name, short index){
    responses[index].time = time;
    responses[index].iterations = iterations;
    responses[index].name = name;
}

void swapStructs(struct sort_responses * x, struct sort_responses * y){
    struct sort_responses temp = *x;
    *x = *y;
    *y = temp;
}

void sortResponsesByTime(struct sort_responses * responses, short length){
    for(int i = 0; i < length -1; ++i)
    {
        for(int j = i + 1; j > 0; --j)
        {
            if(responses[j - 1].time > responses[j].time)
                swapStructs(&responses[j - 1], &responses[j]);

        }
    }
}

void sortResponsesByIterations(struct sort_responses * responses, short length){
    for(int i = 0 ; i < length - 1 ; ++i)
    {
        for(int j = i + 1; j > 0; --j)
        {
            if(responses[j - 1].iterations > responses[j].iterations)
                swapStructs(&responses[j - 1], &responses[j]);
        }
    }
}

void restoreArray2()
{
    memcpy(array2, array, SIZE_OF_ARRAY * sizeof(double));
    iterations=0;
}

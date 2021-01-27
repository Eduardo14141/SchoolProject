#include <stdio.h>
#include <string.h>

FILE * openFile(char *name)
{
	FILE *file;
	file = fopen(name, "w");
	
	return file;
}

void write2File(FILE * file, char * text)
{
	fputs(text, file);
}

void array2char(double * array, unsigned int size, FILE * file)
{
//	char arr2char[size * 25];
	char temp[20];
    
	for(int i = 0; i < size; i++)
	{
		sprintf(temp, "%lf", array[i]);
    	strcat(temp, "\n");
    	write2File(file, temp);
	}


    //write2File(file, arr2char);
}

void closeFile(FILE *file)
{
	fclose(file);
}

void writeDataToFile(FILE *file, char *name, clock_t lapse, unsigned long iterations)
{
	char temp[100];
    sprintf(temp, "\nName: %s\tIterations: %lu\tTime: %lu(ms)", name, iterations, lapse);
    write2File(file, temp);
}





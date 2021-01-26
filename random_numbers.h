#include <time.h>
#include <stdlib.h>
#include <float.h>
#include <unistd.h>

double getRandomNumber(double minor, double major)
{
    return ((double) rand() * (major - minor)) / (double) RAND_MAX + minor;
}

unsigned long mix(unsigned long a, unsigned long b, unsigned long c) {
a=a-b; a=a-c; a=a^(c >> 13);
b=b-c; b=b-a; b=b^(a << 8);
c=c-a; c=c-b; c=c^(b >> 13);
a=a-b; a=a-c; a=a^(c >> 12);
b=b-c; b=b-a; b=b^(a << 16);
c=c-a; c=c-b; c=c^(b >> 5);
a=a-b; a=a-c; a=a^(c >> 3);
b=b-c; b=b-a; b=b^(a << 10);
c=c-a; c=c-b; c=c^(b >> 15);
return c;
}
	
void setSeed()
{
	srand(mix(clock(), time(NULL), getpid())); // aleatoriedad mas grande
}

void fillArray(double *array, unsigned int size)
{
	for ( int i = 0 ; i<size ; i++)
	{
		array[i] = getRandomNumber(-10000, 10000);
	}
}

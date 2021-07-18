// to use : GetRand(two values here);

// receives two numbers
// and returns a random number between those two numbers

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int GetRand(int, int);


int GetRand(int minimum, int maximum)
{
	int num = 0;
	srand(time(NULL));
	num = minimum + rand() % (maximum - minimum + 1);
	if (num == 0) {num = 1;}
	return num;
} // end of GetRand()

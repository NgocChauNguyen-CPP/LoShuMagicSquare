#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, n;
	time_t t;
	n = 10;
	int count = 0;
	
	//use this instead of boolean
	int found = 0;

	srand((unsigned) time(&t));
	int twoDimArray[3][3];

	//Initialize a 2D array
	for(int row = 0; row < 3; ++row)
	{
		for(int colm = 0; colm < 3; ++colm)
		{
			twoDimArray[row][colm] = rand() % 10;
		}
	}

	for(int row = 0; row < 3; ++row)
	{
		printf("[");
		for(int colm = 0; colm < 3; ++colm)
		{
			printf(" %d ", twoDimArray[row][colm]);
		}
		printf("]");
		printf("\n");
	}
	return EXIT_SUCCESS;
}
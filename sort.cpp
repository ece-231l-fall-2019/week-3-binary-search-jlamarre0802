#include <vector>
#include "sort.h"

void swap(int *a, int b*)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
  
void bubblesort(int *begin, const int *end)
{
	for(int i = 1; i < 1999; i++)
	{
		for(int j = 0; j <1999; j++)
		{
			 if (*(begin + j) > *(begin + j + 1))
				 swap((begin + j), (begin + j + 1));
		}
	}
}


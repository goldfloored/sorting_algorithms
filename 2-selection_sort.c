#include "sort.h"
/**
 * selection_sort - sort array with selection sort algorithm
 * @array: array to sort
 * @size: size of the array
**/
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t indx;
	int temp;

	for (i = 0; i < size; i++)
	{
		indx = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[indx])
			{
				indx = j;
			}
		}
		if (indx != i)
		{
			temp = array[i];
			array[i] = array[indx];
			array[indx] = temp;
			print_array(array, size);
		}
	}
}

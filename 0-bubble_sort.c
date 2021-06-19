#include "sort.h"
/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: the array.
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int swap = 1;
	int temp = 0;


	while (swap == 1)
	{
		swap = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
	}
}

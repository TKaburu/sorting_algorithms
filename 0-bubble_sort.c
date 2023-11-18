#include "sort.h"

/**
 * bubble_sort - This function sorts in ascending order
 * @array:  The array we are sorting
 * @size: The size of the array
 *
 */


void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t t, k;


	if (array == NULL || size < 2)
		return;

	for (t = 0; t < size; t++)
	{
		for (k = 0; k < size - 1 - t; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
		/*k = 0;*/
	}

}

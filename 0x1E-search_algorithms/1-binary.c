#include "search_algos.h"


/**
 * printer_array - Function that print array in search
 * @array: pointer to array to search
 * @low: index to low the array
 * @high: index to high the array
 *
*/

void printer_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		printf("%d", array[low]);
		if (low != high)
			printf(", ");
	}
	putchar('\n');
}

/**
 * binary_search - Function that searches for a value in
 * a sorted array of integers using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value tu search for
 * Return: return the first index where value is located
 * if value is not present in array or if array is NULL
 * The function return -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0, high = size - 1, low = 0;

	if (array != NULL && size > 0)
	{

		do {
			printer_array(array, low, high);
			idx = ((high - low) / 2) + low;

			if (array[idx] == value)
				return (value);

			if (low == high)
				break;

			if (array[idx] < value)
				low = idx + 1;
			else
				high = idx - 1;
		} while (array[idx] != value);
	}
	return (-1);
}

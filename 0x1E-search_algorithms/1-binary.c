#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - function to search for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is
 * not present in array or if array is NULL.
 */

int binary_search(int *array, size_t size, int value);
void display_array(int *array, size_t left, size_t right);

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	if (array == NULL)
	return (-1);

	while (left <= right)
	{
	display_array(array, left, right);
	middle = left + (right - left) / 2;

	if (array[middle] == value)
		return (middle);
	else if (array[middle] < value)
		left = middle + 1;
	else
		right = middle - 1;
	}
	return (-1);
}

/**
 * display_array - function to print the array being searched
 * every time it changes
 * @array: Pointer to the first element of the array to search in
 * @left: first index of the array/subarray
 * @right: last index of the array/subarray
 */
void display_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}

	printf("\n");
}

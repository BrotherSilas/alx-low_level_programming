#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

/**
 * linear_search - to search for a value in an array of integers
 * using the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is
 * not present in array or if array is NULL.
 */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void display_array(int *array, size_t left, size_t right);
#endif /* SEARCH_ALGOS_H */


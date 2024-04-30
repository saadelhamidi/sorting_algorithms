#include "sort.h"

/**
 * quick_sort - Sorts an array using the Quick Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quicksort_recursive(array, 0, size - 1, size);
}

/**
 * quicksort_recursive - Recursively sorts the partitioned array.
 * @array: The array to be sorted.
 * @start: The start index of the partition.
 * @end: The end index of the partition.
 * @size: The size of the array.
 */
void quicksort_recursive(int *array, int start, int end, size_t size)
{
if (start < end)
{
int pivot_index = partition(array, start, end, size);

quicksort_recursive(array, start, pivot_index - 1, size);
quicksort_recursive(array, pivot_index + 1, end, size);
}
}

/**
 * partition - Partitions the array for Quick Sort.
 * @array: The array to be partitioned.
 * @start: The start index of the partition.
 * @end: The end index of the partition.
 * @size: The size of the array.
 * Return: The pivot index.
 */
int partition(int *array, int start, int end, size_t size)
{
int pivot = array[end];
int i = start - 1;

for (int j = start; j < end; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
}

if (i + 1 != end)
{
swap(&array[i + 1], &array[end]);
print_array(array, size);
}

return (i + 1);
}

/**
 * swap - Swaps two integer values.
 * @a: The first value.
 * @b: The second value.
 */


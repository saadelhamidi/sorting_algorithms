#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 *               the bubble sort algorithm.
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;
    int swapped;

    if (size < 2 || array == NULL)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* Swap elements */
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                /* Set swapped flag */
                swapped = 1;

                /* Print array after each swap */
                print_array(array, size);
            }
        }

        /* If no elements were swapped, array is already sorted */
        if (!swapped)
            break;
    }
}


#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
void quicksort_recursive(int *array, int start, int end, size_t size);
int  partition(int *array, int start, int end, size_t size);
void perform_swaping(int *a, int *b);
void print_array_after_swaping(int *array, size_t size);

void shell_sorting(int *array, size_t size);
void cocktail_sorting_list(listint_t **list);

#endif

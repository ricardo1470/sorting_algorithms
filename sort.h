#ifndef SHORT_H
#define SHORT_H

#include <stdio.h>
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

/* function that sorts an array of integers in ascending order Bubble sort*/
void bubble_sort(int *array, size_t size);
/*function doubly linked list of integers in ascending order Insertion sort*/
void insertion_sort_list(listint_t **list);
/*function that sorts an array of integers in ascending order Selection sort*/
void selection_sort(int *array, size_t size);
/*function that sorts an array of integers in ascending order Quick sort*/
void quick_sort(int *array, size_t size);
void quicksort(int *array, int hi, int lo, size_t size);
size_t partition(int *array, int hi, int lo, size_t size);


#endif /* SHORT_H */

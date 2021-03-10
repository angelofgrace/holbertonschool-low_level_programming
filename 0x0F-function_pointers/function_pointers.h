#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>

/** Task 0 - Print a name */
void print_name(char *name, void (*f)(char *));

/** Task 1 - Call a function for each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/** Task 2 - Search for an integer in an array */
int int_index(int *array, int size, int (*cmp)(int));



#endif

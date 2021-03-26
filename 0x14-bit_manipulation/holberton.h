#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* _putchar emulator */
int _putchar(char c);

/* Task 0 - Convert a binary number to an unsigned integer */
unsigned int binary_to_uint(const char *b);

/* Task 1 - Print the binary representation of a number */
void print_binary(unsigned long int n);

/* Task 2 - find the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Task 3 - Set the value of a bit at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Task 4 - Clear the value of a bit at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Task 5 - Find the number of bits that would need to flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);


/* HOLBERTON_H end */
#endif

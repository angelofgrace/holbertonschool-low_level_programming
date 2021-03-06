#ifndef Holberton_h
#define Holberton_h

/**custom putchar function*/
int _putchar(char c);

/** Task 0 - reset an external pointer's target value to 98*/
void reset_to_98(int *n);

/** Task 1 - Swap the value of two external variables*/
void swap_int(int *a, int *b);

/** Task 2 - Output the length of input string*/
int _strlen(char *s);

/** Task 3 - Print a string of characters followed by newline*/
void _puts(char *str);

/** Task 4 - Print a string of characters in reverse*/
void print_rev(char *s);

/** Task 5 - Reverse a string*/
void rev_string(char *s);

/** Task 6 - Print every other character of a string*/
void puts2(char *str);

/** Task 7 - Print the second half of a string*/
void puts_half(char *str);

/** Task 8 - Print n elements of an array*/
void print_array(int *a, int n);

/** Task 9 - Copy a string to another point in memory*/
char *_strcpy(char *dest, char *src);



#endif

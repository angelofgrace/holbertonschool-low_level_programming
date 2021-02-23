#ifndef Holberton_H
#define Holberton_H

/** custom putchar function */
int _putchar(char c);

/** Task 0 - set some memory to an input character*/
char *_memset(char *s, char b, unsigned int n);

/** Task 1 - copy values from some amount of memory
	to another memory address*/
char *_memcpy(char *dest, char *src, unsigned int n);

/** Task 2 - locate a character within a string */
char *_strchr(char *s, char c);

/** Task 3 - find the length of prefix substring */
unsigned int _strspn(char *s, char *accept);

/** Task 4 - search a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);


#endif

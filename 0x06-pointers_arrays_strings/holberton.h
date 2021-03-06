#ifndef Holberton_H
#define Holberton_H

/** Task 0 - Smoosh together two strings of characters*/
char *_strcat(char *dest, char *src);

/** Task 1 - Concatenate two strings, using n bytes from src*/
char *_strncat(char *dest, char *src, int n);

/** Task 2 - Copy n bytes of a string to dest*/
char *_strncpy(char *dest, char *src, int n);

/** Task 3 - Compare two strings using ASCII values*/
int _strcmp(char *s1, char *s2);

/** Task 4 - Reverse the content of an array of integers*/
void reverse_array(int *a, int n);

/** Task 5 - Capitalize all lowercase letters of a string*/
char *string_toupper(char *c);

/** Task 6 - Capitalize all words of a string*/
char *cap_string(char *c);

/** Task 7 - Tr4nsl4t3 to 1337*/
char *leet(char *);

/** Task 8 - Translate to ROT13*/
char *rot13(char *c);

#endif

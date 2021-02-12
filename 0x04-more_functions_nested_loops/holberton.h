#ifndef Holberton_H
#define Holberton_H

/*writes one character to standard output*/
int _putchar(char c);

/*check if a letter is uppercase*/
int _isupper(int c);

/*check if a character is a single numerical digit*/
int _isdigit(int c);

/*multiplies two integers togethre*/
int mul(int a, int b);

/*use _putchar to print numbers zero through nine*/
void print_numbers(void);

/*print all single digit numbers, except two and four*/
void print_most_numbers(void);

/*print numbers zero through fourteen, ten times*/
void more_numbers(void);

/*print a line with n number of underscores*/
void print_line(int n);

/*print a diagonal line of slashes buffered by whitespace*/
void print_diagonal(int n);

/*fizz buzz test*/
void fizzy_buzzy(void);

/*print a square of variable size using '#' characters*/
void print_square(int size);



#endif


#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

int _putchar(int ch);
void print_name(char *name, void (*f)(char *));
void print_char(char *c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif

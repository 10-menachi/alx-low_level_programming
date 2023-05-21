# 0x05-pointers_arrays_strings

## Purpose:

> To be able to explain the following:
>
> - What are pointers and how to use them
> - What are arrays and how to use them
> - What are the differences between pointers and arrays
> - How to use strings and how to manipulate them
> - Scope of variables

## main.h

contains function prototypes

## 0-reset_to_98.c

contains a function that takes a pointer
to an int as a parameter and updates the
value it points to to 98

### Explanation:

> `*n` is a pointer to an integer
> `*n = 98` updates the value of the integer stored in n to 98.
> Dereferencing is used in the syntax `*n` to access the value of the integer stored in the variable `n`.

## 1-swap.c

contains a function that swaps the values
of two integers

### Explanation:

> `*a` and `*b` are pointers to integers
> To swap the values in the integers, the following steps are taken:
>
> - The value of the integer stored in `*a` is stored in a temporary variable `temp`
> - The value of the integer stored in `*b` is stored in `*a`
> - The value of the integer stored in `temp` is stored in `*b`

## 2-strlen.c

contains a function that returns the length
of a string

### Explanation:

> A variable `length` is created and initialized to 0.
> A `while` loop is used to iterate through the string until the null character is reached.
> The value of `length` is incremented by 1 for each iteration.
> The value of `length` is returned.

## 3-puts.c

contains a function that prints a string using the function `_putchar`,
followed by a new line

### Explanation:

> A `while` loop is used to iterate through the string until the null character is reached.
> The value of each character is printed using the function `_putchar` for each iteration.
> The value of `_putchar('\n')` is printed to print a new line.

## 4-print_rev.c

contains a function that prints a string
in reverse

### Explanation:

> The custom function \_strlen is introduced.
> A variable `length` is created and initialized to the value returned by the function \_strlen, given the string as an argument.
> A `while` loop is used to iterate through the string in reverse, starting from the last character.
> The value of each character is printed using the function `_putchar` for each iteration.
> The value of `_putchar('\n')` is printed to print a new line.

## 5-rev_string.c

contains a function that reverses a
string

### Explanation:

> Four variables are created, a character `temp` and three integers, `len1`, `len2` and looping variable `a`.
> `len1` and `len2` are initialized to 0.
> a `while` loop is used to iterate through the string until the null character is reached.
> On each iteration, len1 is incremented by 1, and in the end stores the length of the string.
> `len2` is set to the value of `len1` minus 1.
> A `for` loop is used to iterate through the string until half of the string is reached.
> On each iteration, the value of the character at the current index is stored in `temp`.
> The value of the character at the current index is set to the value of the character at the index `len2`.
> The value of the character at the index `len2` is set to the value of `temp`.
> The value of `len2` is decremented by 1.
> the string is reversed and returned by the function.

## 6-puts2.c

contains a function that prints every other character if a string

### Explanation:

> Two variables, i and len, are created
> len is initialized to 0
> a `while` loop is used to iterate through the string until the null character is reached, incrementing len by 1 on each iteration.
> Eventually len stores the length of the string.
> a `for` loop is used to iterate through the string until the null character is reached.
> On each iteration, the character whose index is an even number is printed.
> The value of `_putchar('\n')` is printed to print a new line.

## 7-puts_half.c

contains a function that prints half of
a string

### Explanation:

> Two variables, i and len, are created
> len is initialized to 0
> a `while` loop is used to iterate through the string until the null character is reached, incrementing len by 1 on each iteration.
> Eventually len stores the length of the string.
> An `if` statement is used to check if the length of the string is even.
> If the length of the string is even, a `for` loop is used to iterate through the string until half of the string is reached.
> On each iteration, the character at the given index is printed.

## 8-print_array.c

contains a function that prints n elements
of a given array

### Explanation:

> A `for` loop is used to iterate through the array until the given number of elements is reached.
> On each iteration, the value of the element at the current index is printed.
> The value of `_putchar('\n')` is printed to print a new line.

## Resources:

- [Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

## Additional Resources:

- [Understanding Pointers](https://www.youtube.com/watch?v=vp6dlzFL1AA)
- [Pointers and Arrays](https://www.youtube.com/watch?v=5BpYD7TxvAg)
- [Strings] (https://www.youtube.com/watch?v=3Z2nEHZ9TgU)

# 0x06-pointers_arrays_strings

## Objectives:

> Refer to previous objectives

## 0-strcat.c

contains a function that concatenates
two string

### Explanation:

> An `int` variable named `index` is created to hold the index of the first character of the second string.
> `index` is set to the length of the first string, through the help of a `while` loop.
> A `while` loop is used to append the second string to the first string.
> The first string is returned.

## 1-strncat.c

contains a function that concatenates
two strings but only up to n bites of
the second string

### Explanation:

> two `int` variables, i and j, are created and initialized to 0
> i is used to hold the index of the first character of the second string
> j is used to hold the index of the first character of the first string
> i is set to the length of the first string, through the help of a `while` loop
> A `while` loop is used to append n characters of the second string to the first string
> The first string is returned

## 2-strncpy.c

contains a function that copies a
string

### Explanation:

> An `int` variable named `i` is created and initialized to 0
> A `for` loop is used to copy n characters of the second string to the first string
> The last character of the first string is set to `\0`
> The first string is returned

## 3-strcmp.c

Contains a function that compares two strings

### Explanation:

> A `while` loop is used to compare the characters of the two strings
> If a null character is encountered, 0 is returned
> If the characters are not equal, the difference between the characters is returned

## 4-rev_array.c

Contains a function that reverses the content of an array of integers

### Explanation:

> Two `int` variables, `i` and `j`, are created and initialized to 0
> A `for` loop is used to swap the elements of the array
> The reversed array is returned

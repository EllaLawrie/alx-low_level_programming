# 0x01. C - Variables, if, else, while
## General
 * What are the arithmetic operators and how to use them
 * What are the logical operators (sometimes called boolean operators) and how to use them
 * What the the relational operators and how to use them
 * What values are considered TRUE and FALSE in C
 * What are the boolean operators and how to use them
 * How to use the if, if ... else statements
 * How to use comments
 * How to declare variables of types char, int, unsigned int
 * How to assign values to variables
 * How to print the values of variables of type char, int, unsigned int with printf
 * How to use the while loop
 * How to use variables with the while loop
 * How to print variables using printf
 * What is the ASCII character set
 * What are the purpose of the gcc flags -m32 and -m64
 
 ## 0-positive_or_negative.c: Positive anything is better than negative nothing
 
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print it. The variable n will store a different value every time you will run this program; You don�^�^�t have to understand what rand, srand, RAND_MAX do. The output of the program should be:

    The number, followed by
        if the number is greater than 0: is positive
        if the number is 0: is zero
        if the number is less than 0: is negative
    followed by a new line

## 1-last_digit.c: The last digit
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n. The variable n will store a different value every time you run this program; You don’t have to understand what rand, srand, and RAND_MAX do. The output of the program should be:

The string Last digit of, followed by n, followed by the string is, followed by: if the last digit of n is greater than 5: the string and is greater than 5 if the last digit of n is 0: the string and is 0 if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0 followed by a new line.

## 2-print_alphabet.c: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a program that prints the alphabet in lowercase, followed by a new line. You can only use the putchar function (every other function (printf, puts, etc…) is forbidden); All your code should be in the main function. You can only use putchar twice in your code.

## 3-print_alphabets.c: alphABET
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line. You can only use the putchar function (every other function (printf, puts, etc…) is forbidden); All your code should be in the main function; You can only use putchar three times in your code.

## 4-print_alphabt.c: When I was having that alphabet soup, I never thought that it would pay off
Write a program that prints the alphabet in lowercase, followed by a new line. Print all the letters except q and e; You can only use the putchar function (every other function (printf, puts, etc…) is forbidden); All your code should be in the main function; You can only use putchar twice in your code.

## 5-print_numbers.c: Numbers
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line. All your code should be in the main function.
Use the function printf; You are not allowed to use the function puts; Your program should return 0; Your program should compile without warning when using the -Wall gcc option using:

{ #include <stdio.h>

int main(void) { printf("with proper grammar, but the outcome is a piece of art,\n"); return (0); } }

## 6-size.c: Size is not grandeur, and territory does not make a nation
A C program that prints the size of various types on the computer it is compiled and run on. You should produce the exact same output as in the example; Warnings are allowed; Your program should return 0; You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option using:

{ #include <stdio.h>

int main(void) { int a; long int b; long long int c; char d; float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
} }

## 100-intel: Intel
A script that generates the assembly code (Intel syntax) of a C code and save it in an output file. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .s instead of .c.

Example: if the C file is main.c, the output file should be main.s using gcc -S -masm=intel $CFILE.

## 101-quote.c: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts; Your program should return 1; Your program should compile without any warnings when using the -Wall gcc option using:

{ #include <stdio.h>

int main(void) { write(2, "and that piece of art is useful" - Dora Korpar, 2015-10-19\n", 61);

return (1);
} }

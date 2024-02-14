# C Programming Coursework

## Overview

In this course, "Advanced C Programming," I will delve into the intricacies and advanced features of the C programming language, exploring a spectrum of topics from the foundational introduction to C programming to the complexities of data structures such as linked lists, binary trees, and multiway search trees. This course is meticulously designed to enhance understanding of both the theoretical aspects and practical applications of these advanced concepts within C programming.

The journey through this course will be marked by an in-depth examination of programming with pointers, a comparison between iterative and recursive coding techniques, and the utilization of prefix and postfix operators in code optimization. I will also tackle advanced data management techniques through the implementation of linked lists, balancing of binary trees, and the operational intricacies of B trees and multiway search trees. The course aims to provide a comprehensive understanding of binary applications in C, emphasizing bitwise operations and binary file manipulation.

## Course Objectives

- Master Advanced C Programming for Complex Problem Solving
- Implement and Manipulate Advanced Data Structures: 
- Optimize Code with Iterative and Recursive Techniques
- Apply Binary Applications for Data Optimization
- Enhance Code Analysis Skills for Complex Solutions
- Utilize Advanced Algorithms in Practical Applications

## Assignment 1

### Part 1

Write a C program which uses a function called search to find the location of a value in THREE arrays of floats. The function should take three parameters:
         `the value to be found`
         `the array to be searched`
         `the size of the array`

N.B.!!!! The main program should read in three arrays of varying size example:                    ```array a has twelve elements
                   array b has six elements
                   array c has nine elements
                   array d has four elements```
         input to these arrays terminated by illegal input(see handout)

The function should return for each array the index where the value is found. If not found, the function should return -1.

### Part 2

Write a C program to generate all the multiples of 8 less than 10000

## Assignment 2


(The Sieve of Eratosthenes) A prime integer is any integer greater than 1 that can be divided evenly only by itself and 1. The Sieve of Eratosthenes is a method of finding prime numbers. It works as follows:

```
a) Create an array with all elements initialized to 1 (true). Array elements with prime indices will remain 1. All other array elements will eventually be set to zero.

```

```
b) Starting with array index 2 (index 1 is not prime), every time an array element is found whose value is 1, loop through the remainder of the array and set to zero every element whose index is a multiple of the index for the element with value 1. For array index 2, all elements beyond 2 in the array that are multiples of 2 will be set to zero (indices 4, 6, 8, 10, and so on.). For array index 3, all elements beyond 3 in the array that are multiples of 3 will be set to zero (indices 6, 9, 12, 15, and so on.).

When this process is complete, the array elements that are still set to 1 indicate that the index is a prime number. Write a program that uses an array of 1,000 elements to determine and print the prime numbers between 1 and 999. Ignore element 0 of the array.
```

## Assignment 3

Write a program to enter two strings….a function should be written to determine whether the second string is found in the first and if so at which index for example:
```
String1: tomato
String 2: mat
Function returns TRUE, index of 3

String1: vegetable
String2: gets
Function returns FALSE

String1: vegetable
String2: get
Function returns TRUE, index of 2
```
           
Use pointers,  calls by reference


## Assignment 4

### Part 1

(Perfect Numbers) An integer number is said to be a perfect number if its factors, including 1 (but not the number itself), sum to the number. For example, 6 is a perfect number because 6 = 1 + 2 + 3. Write a function isPerfect that determines whether parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000. Print the factors of each perfect number to confirm that the number is indeed perfect. Challenge the power of your computer by testing numbers much larger than 1000.


### Part 2


(Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.

```
a) Write a function that determines whether a number is prime.`
```
```
b) Use this function in a program that determines and prints all the prime numbers between 1 and 10,000. How many of these 10,000 numbers do you really have to test before being sure that you have found all the primes?
```
```
c) Initially you might think that n/2 is the upper limit for which you must test to see whether a number is prime, but you need go only as high as the square root of n. Rewrite the program, and run it both ways. Estimate the performance improvement.
```

### Part 3

(Reversing Digits) Write a function that takes an integer value and returns the number with its digits reversed. For example, given the number 7631, the function should return 1367.

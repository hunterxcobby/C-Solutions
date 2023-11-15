# Dynamic Array Sum

In this C programming challenge, you will work with dynamic arrays. An array is a container object that holds a fixed number of values of a single type. To create a dynamic array in C, you can use the `malloc` function to allocate memory on the heap at runtime.

## Challenge Description

Create an array of size `n` dynamically and read the values from stdin. Iterate through the array, calculate the sum of all elements, print the sum, and free the allocated memory.

## Input Format

- The first line contains an integer, `n`, representing the size of the array.
- The next line contains `n` space-separated integers, the elements of the array.

## Constraints

- 1 <= n <= 1000
- -1000 <= Elements <= 1000

## Output Format

Print the sum of the integers in the array.

## Sample Input 0

```
6
16 13 7 2 1 12
```

## Sample Output 0

```
51
```

## Sample Input 1

```
7
1 13 15 20 12 13 2
```

## Sample Output 1

```
76
```

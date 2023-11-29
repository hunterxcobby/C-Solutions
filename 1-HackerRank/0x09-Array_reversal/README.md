**Array Reversal Challenge:**

This challenge involves reversing an array of integers. The goal is to take an array as input, reverse its elements, and print the reversed array. The solution employs Python, utilizing array slicing to achieve the reversal. The implementation reads the size of the array and the array elements, reverses the array, and outputs the reversed array.

**Input Format:**
- The first line contains an integer, `n`, denoting the size of the array.
- The next line contains `n` space-separated integers, denoting the elements of the array.

**Constraints:**
- 1 <= n <= 1000
- 1 <= arr[i] <= 10000 (where arr[i] is the i-th element of the array)

**Output Format:**
- The output is handled by the code given in the editor, which prints the reversed array.

**Sample Input 0:**
```
6
16 13 7 2 1 12 
```
**Sample Output 0:**
```
12 1 2 7 13 16 
```
**Explanation 0:**
Given array, `arr = [16, 13, 7, 2, 1, 12]`. After reversing the array, `arr = [12, 1, 2, 7, 13, 16]`.

**Sample Input 1:**
```
7
1 13 15 20 12 13 2 
```
**Sample Output 1:**
```
2 13 12 20 15 13 1 
```

**Sample Input 2:**
```
8
15 5 16 15 17 11 5 11 
```
**Sample Output 2:**
```
11 5 11 17 15 16 5 15 
```
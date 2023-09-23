---

# Roman to Integer Conversion

Roman numerals are represented by seven different symbols: I, V, X, L, C, D, and M.

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

For example, 2 is written as II in Roman numerals, which is just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written from largest to smallest, from left to right. However, there are special cases where subtraction is used:

- I can be placed before V (5) and X (10) to make 4 and 9.
- X can be placed before L (50) and C (100) to make 40 and 90.
- C can be placed before D (500) and M (1000) to make 400 and 900.

## Table of Contents
- [Problem Statement](#problem-statement)
- [Example Usage](#example-usage)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Example 3](#example-3)
- [Constraints](#constraints)
- [Intuition](#intuition)
- [Approach](#approach)
- [Complexity](#complexity)

## Problem Statement

Given a Roman numeral, convert it to an integer.

## Example Usage

### Example 1:

```
Input: s = "III"
Output: 3
Explanation: III = 3.
```

### Example 2:

```
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V = 5, III = 3.
```

### Example 3:

```
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90, and IV = 4.
```

## Constraints

- 1 <= s.length <= 15
- `s` contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
- It is guaranteed that `s` is a valid Roman numeral in the range [1, 3999].

## Intuition
The problem involves converting Roman numerals to their corresponding integer values. To achieve this, we need to recognize the special cases where subtraction is involved. This can be accomplished by iterating through the string and comparing the values of adjacent Roman numerals.

## Approach
1. Iterate through the Roman numeral string.
2. Compare the current numeral with the next numeral.
3. If the current numeral is smaller than the next one, subtract its value; otherwise, add its value to the total.
4. Keep track of the total value as we traverse the string.
5. Return the total value.

## Complexity
- Time complexity: O(n), where n is the length of the Roman numeral string. We iterate through the string once.
- Space complexity: O(1), as we use a fixed amount of additional memory to store variables and perform operations.

---

---

# Two Sum

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Table of Contents
- [Example](#example)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Example 3](#example-3)
- [Constraints](#constraints)
- [Follow-up](#follow-up)
- [Solution](#solution)
  - [Intuition](#intuition)
  - [Approach](#approach)
  - [Complexity](#complexity)
- [Summary](#summary)

## Example

### Example 1:

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

### Example 2:

```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

### Example 3:

```
Input: nums = [3,3], target = 6
Output: [0,1]
```

## Constraints

- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Only one valid answer exists.

## Follow-up

Can you come up with an algorithm that is less than O(n^2) time complexity?

## Solution

### Intuition
We can solve this problem by iterating through the string in reverse order and counting the length of the last word.

### Approach
1. Initialize a variable `length` to keep track of the length of the last word.
2. Start from the end of the string and skip any trailing spaces.
3. Then, count the length of the last word.
4. Return the calculated `length`.

### Complexity
- Time complexity: O(n), where n is the length of the input string.
- Space complexity: O(1), as we are not using any additional data structures.

## Summary

The "Two Sum" problem involves finding a pair of numbers in an array that add up to a specified target value. The goal is to return the indices of these two numbers. This problem is commonly used as an introductory exercise in algorithmic problem-solving and is often encountered in coding interviews.

---

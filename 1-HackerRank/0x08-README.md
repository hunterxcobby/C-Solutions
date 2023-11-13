# Bitwise Operations Challenge Readme

## Objective

In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, in the C language, use `1` to represent true and `0` to represent false. The logical operators compare bits in two numbers and return true or false, `1` or `0`, for each bit compared.

### Bitwise AND Operator `&`

The output of bitwise AND is `1` if the corresponding bits of two operands are `1`. If either bit of an operand is `0`, the result of the corresponding bit is evaluated to `0`. It is denoted by `&`.

### Bitwise OR Operator `|`

The output of bitwise OR is `1` if at least one corresponding bit of two operands is `1`. It is denoted by `|`.

### Bitwise XOR (exclusive OR) Operator `^`

The result of the bitwise XOR operator is `1` if the corresponding bits of two operands are opposite. It is denoted by `^`.

For example, for integers `3` and `5`:

```
3 = 00000011 (In Binary)
5 = 00000101 (In Binary)

AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6
```

You will be given an integer `n`, and a threshold `k`. Print the results of the AND, OR, and XOR comparisons on separate lines, in that order.

## Example

The results of the comparisons are below:

```
a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1
```

For the AND comparison, the maximum is `2`. For the OR comparison, none of the values is less than `4`, so the maximum is `3`. For the XOR comparison, the maximum value less than `4` is `3`. The function should print:

```
2
0
2
```

## Function Description

Complete the `calculate_the_maximum` function.

`calculate_the_maximum` has the following parameters:

- `int n`: the highest number to consider
- `int k`: the result of a comparison must be lower than this number to be considered

## Prints

Print the maximum values for the AND, OR, and XOR comparisons, each on a separate line.

## Input Format

The only line contains 3 space-separated integers, `a`, `b`, and `k`.

## Constraints

- `1 <= n, k <= 1000`

## Sample Input 0

```
5 4
```

## Sample Output 0

```
2
3
3
```

## Explanation 0

All possible values of `a` and `b` are:

```
a b
1 2
1 3
2 3
```

The maximum possible value of `a & b` that is also less than `4` is `2`, so we print `2` on the first line.

The maximum possible value of `a | b` that is also less than `4` is `3`, so we print `3` on the second line.

The maximum possible value of `a ^ b` that is also less than `4` is `3`, so we print `3` on the third line.
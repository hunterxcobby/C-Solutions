
---

# Input Handling in C

## Objective

This challenge aims to familiarize you with taking various types of input (character, string, and sentence) in the C programming language.

### Single Character Input

To take a single character as input, you can use the following code:

```c
char ch;
scanf("%c", &ch);
printf("%c", ch);
```

This code reads a character and prints it.

### String Input

To take a string as input in C, you can use:

```c
scanf("%s", s);
```

However, this method only accepts input until it encounters the first space.

### Input Line

To take an entire line as input, you can use:

```c
scanf("%[^\n]%*c", s);
```

Here, `s` is defined as `char s[MAX_LEN]` where `MAX_LEN` is the maximum size of `s`. The `[]` is the scanset character, `^\n` stands for taking input until a newline character isn't encountered. The `%*c` reads the newline character and discards it.

Note: The statement `scanf("%[^\n]%*c", s);` will not work because the last statement will read a newline character, `\n`, from the previous line. This can be handled in a variety of ways. One way is to use `scanf("\n");` before the last statement.

## Task

You are required to print the character, `ch`, in the first line. Then print `s` in the next line. Finally, print the sentence.

## Input Format

1. Take a character, `ch`, as input.
2. Take a string, `s`, as input.
3. Take a sentence as input.

## Constraints

Strings for `s` and the sentence will have fewer than 100 characters, including the newline.

## Output Format

Print three lines of output:
1. The first line prints the character, `ch`.
2. The second line prints the string, `s`.
3. The third line prints the sentence.

## Sample Input 0

```
C
Language
Welcome To C!!
```

## Sample Output 0

```
C
Language
Welcome To C!!
```

--- 

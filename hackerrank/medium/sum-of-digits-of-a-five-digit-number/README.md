# Conditional Statements in C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective** 

The modulo operator, `%`, returns the remainder of a division.  For example, `4 % 3 = 1` and `12 % 10 = 2`.  The ordinary division operator, `/`, returns a truncated integer value when performed on integers.  For example, `5 / 3 = 1`.  To get the last digit of a number in base 10, use $10$ as the modulo divisor.  

**Task**

Given a five digit integer, print the sum of its digits.  


**Input Format**

The input contains a single five digit number, $n$.

**Constraints**

$ 10000 \le n \le 99999$  

**Output Format**

Print the sum of the digits of the five digit number.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T15:09:27.376Z  

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("one\n");
    } else if (n == 2) {
        printf("two\n");
    } else if (n == 3) {
        printf("three\n");
    } else if (n == 4) {
        printf("four\n");
    } else if (n == 5) {
        printf("five\n");
    } else if (n == 6) {
        printf("six\n");
    } else if (n == 7) {
        printf("seven\n");
    } else if (n == 8) {
        printf("eight\n");
    } else if (n == 9) {
        printf("nine\n");
    } else {
        printf("Greater than 9\n");
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem)
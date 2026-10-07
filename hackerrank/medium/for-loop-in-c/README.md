# For Loop in C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective**

In this challenge, you will learn the usage of the _for_ loop, which is a programming language statement which allows code to be executed until a terminal condition is met.  They can even repeat forever if the terminal condition is never met.    

The syntax for the `for` loop is:

	for ( <expression_1> ; <expression_2> ; <expression_3> )
    	<statement>

- _expression\_1_ is used for intializing variables which are generally used for controlling the terminating flag for the loop.
- _expression\_2_ is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
- _expression\_3_ is generally used to update the flags/variables.

The following loop initializes $i$ to 0, tests that $i$ is less than 10, and increments $i$ at every iteration.  It will execute 10 times.  

	for(int i = 0; i < 10; i++) {
    	...
    }
    
**Task**

For each integer $n$ in the interval $[a, b]$ (given as input) :

- If $1 \le n \le 9$, then print the English representation of it in lowercase. That is "one" for $1$, "two" for $2$, and so on.
- Else if $n > 9$ and it is an even number, then print "even".
- Else if $n > 9$ and it is an odd number, then print "odd".

**Input Format**

The first line contains an integer, $a$.  
The seond line contains an integer, $b$.  

**Constraints**

$ 1 \le a \le b \le 10^6$


**Output Format**

Print the appropriate English representation,`even`, or `odd`, based on the conditions described in the 'task' section.

**Note:** $[a, b] = \{x \in \mathbb{Z} \,|\, ~a \le x \le b\} = \{a, ~a+1, \dots, b\}$

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T15:02:36.547Z  

```c
#include <stdio.h>

int main() {
    int a, b;
    const char *names[] = {"zero", "one", "two", "three", "four",
                           "five", "six", "seven", "eight", "nine"};

    scanf("%d\n%d", &a, &b);

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            printf("%s\n", names[n]);
        } else if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/for-loop-in-c/problem)
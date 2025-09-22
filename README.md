# Recursion-in-Cpp

**Name:** Varnika Maurya  
**PRN:** 24070123160  

---

## Theory

Recursion is a programming technique in which a function calls itself to solve smaller subproblems of a larger problem. Each recursive function has two parts:

1. **Base Case:** Defines when the recursion should stop.  
2. **Recursive Case:** Defines how the problem is reduced into smaller instances.

Recursion is often used in problems like factorial calculation, summation of natural numbers, reversing strings, and reversing numbers.

---

## Program 1: Factorial of a Number using Recursion

### Algorithm
1. Start.  
2. Read the number `n`.  
3. If `n` is 0 or 1, return 1 (base case).  
4. Else, compute `n * fact(n-1)` recursively.  
5. Print the result.  
6. Stop.

---

## Program 2: Sum of Natural Numbers using Recursion

### Algorithm
1. Start.  
2. Read the number `n`.  
3. If `n <= 1`, return 1 (base case).  
4. Else, compute `n + sum(n-1)` recursively.  
5. Print the result.  
6. Stop.

---

## Program 3: Reverse a String using Recursion

### Algorithm
1. Start.  
2. Read a string `str`.  
3. If current character is not `'\0'` (end of string), call the function recursively with the next character.  
4. After recursive call returns, print the current character.  
5. Continue until the string ends.  
6. Stop.

---

## Program 4: Reverse a Number using Recursion

### Algorithm
1. Start.  
2. Read a number `n`.  
3. If `n != 0`, print `n % 10`.  
4. Recursively call the function with `n / 10`.  
5. Repeat until the number becomes 0.  
6. Stop.

---

## Conclusion

This experiment demonstrated the use of recursion in solving basic problems. Each program showed how recursive calls break down complex tasks into simpler subproblems. Factorial and sum illustrated mathematical recursion, while string reversal and number reversal highlighted recursion in data processing. Through this experiment, the concept of base cases and recursive cases was reinforced, showing recursion as an elegant alternative to iteration.

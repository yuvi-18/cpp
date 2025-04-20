/*
q1. What is recursion, and how does it differ from iteration?

ans.
Recursion is a programming technique where a function calls itself to solve a problem by breaking it down into smaller, similar subproblems. Each recursive call works on a smaller instance until a base case is reached, which stops the recursion.

Iteration, on the other hand, involves repeatedly executing a block of code using loops (such as for, while, or do-while) until a condition is met.


q2. Explain the two essential components of a recursive function.

ans. 
Base Case: This is the condition under which the recursion stops. It prevents the function from calling itself indefinitely. Without a base case, the program would enter an infinite loop of self-calls, eventually exhausting the stack memory and causing a stack overflow.

Recursive Case: This is the part of the function where it calls itself with a modified argument, moving closer to the base case. The recursive call breaks the problem into smaller subproblems that are easier to solve.

q3. Why is a base case necessary in recursion? What happens if it is missing?

ans. 
A base case is necessary in recursion because it provides a clear termination condition for the recursive calls. Without a base case, the function would continue to call itself indefinitely, leading to an infinite loop of recursive calls. This, in turn, would eventually exhaust the available stack memory, causing a stack overflow error and crashing the program.
*/
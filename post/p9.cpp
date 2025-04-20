/*
q1. Why are functions important in programming? How do they improve code readability and reusability?

ans.
Functions are important because they:
Modularize Code: Break complex programs into smaller, focused parts.
Improve Readability: Use meaningful names for groups of statements, making code easier to follow.
Enhance Reusability: Allow you to reuse the same code in multiple places without duplication.

q2. What is the difference between user-defined functions and library functions? Can you give an example of each?

ans. 
User-Defined Functions: Created by the programmer to perform specific tasks.
ex:-   int sum = add(5, 10);
Library Functions: Pre-built functions provided by the standard library for common operations.
ex:-   double sqRoot = sqrt(25);

q3. In what situations is call by reference preferred over call by value?

ans.
Call by reference is preferred over call by value in these situations:

When Passing Large Objects: When we work with large objects, copying them by value can be costly. By passing them by reference, we avoid the overhead of copying our entire object.

When We Need to Modify the Original Data: If a function should modify the actual variable, call by reference is essential so that any changes are applied directly to our original variable.

When Multiple Return Values Are Needed: Sometimes, functions need to provide more than one output. Passing parameters by reference allows the function to modify them, effectively giving us multiple return values without complex packaging.
*/
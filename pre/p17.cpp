/*
q1. What do you understand about static members and static member functions?

ams. Static Members: These variables are shared by all objects of the class. There is only one copy of a static member, regardless of how many instances are created. Changes to a static member affect all objects.
Static Member Functions: These functions can be called directly on the class without needing an object instance. Since they don't operate on an instance, they can only access static members and not instance-specific data (no this pointer).


q2. Examine the significance of data types and operators in ensuring type safety and efficient memory usage in C++.

ans. Data types define what kind of data a variable can store and how much memory it uses, ensuring that only valid operations occur. Operators then work within these constraints to perform arithmetic, logic, and other operations safely, helping catch errors at compile time and promoting efficient memory usage.
*/
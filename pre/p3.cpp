/*
q1. Suppose you are developing a simple online shopping system in C++. You start with a procedural approach, using separate functions to manage products, customers, and orders. As the business expands, you need to add features like different payment methods, discount offers, and customer reviews.
Why might the procedural approach become difficult to manage, and how can Object-Oriented Programming (OOP) help in structuring and scaling the system efficiently?


ans. In a procedural approach, we write separate functions to manage products, customers, and orders. As the system grows, this scattered code becomes hard to maintain. Every time we add a new feature, such as different payment methods or discount offers, we may end up duplicating code or modifying several functions. This increases the chance of bugs and makes the system difficult to update.

Object-Oriented Programming (OOP) can help by grouping related data and behaviors into classes. For example, instead of separate functions, we can create a Product class, a Customer class, and an Order class. We can also design a base Payment class and extend it for different payment methods. This modular design makes it easier to add features like customer reviews and discounts, as each class manages its own tasks.
*/
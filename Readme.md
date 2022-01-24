# Class Diagram Challenge
This challenge is about translating a class diagram into code.

# Explanation
Let's say you're writing a management application for an airline. Each airline has flights, that's where this assignment starts.
CFlight represents a single scheduled flight, most important thing is the airplane, but due to maintenance it is possible that the airplane will be changed last minute. The flight has a departure and arrival airport / time. And it has n passengers and n crewmembers which are all persons.
Not all the things in the class diagram are filled in, this is to see how you will implement the relationships in the class diagram. If I would fill in all the members it would provide a lot more insight.

# Base assignment
- Implement this class diagram
- You can pick any editor / build system

# Bonus assignment
Instantiating the CFlight class can be fairly annoying due to the amount of parameters.
Implement a [Builder](https://refactoring.guru/design-patterns/builder) pattern to make this easier.

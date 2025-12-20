# CODESOFT-

                      Task 1 – C++ Programming

1. Number Guessing Game in C++


This project is developed as part of an internship task.
It is a console-based C++ application where the program generates
a random number between 1 and 100, and the user tries to guess it
with helpful hints.



2. Project Objectives
      1. To understand random number generation in C++
      2.To apply loops and conditional statements
      3. To handle user input and output
      4. To practice writing clean and structured code



3.Features
      1.Generates a random number between 1 and 100
      2.Uses `srand(time(0))` to ensure different output on every run
      3.Provides hints:
      4.Guess a greater number
      5.Guess a smaller number
      6.Counts the number of attempts
      7. Simple and user-friendly console interface



4.How It Works
1. The program initializes the random number generator using:
   `srand(time(0))`
2. A random number between 1 and 100 is generated using:
   `rand() % 100 + 1`
3. The user enters guesses through the keyboard
4. The program compares the guess with the generated number
5. Hints are displayed until the correct number is guessed
6. The total number of attempts is displayed at the end.




  5.Sample output 
  Guess a number between 1 and 100
  50
   Guess a greater number
   80
  Guess a smaller number
  78
  You are correct!
  You took 3 chances.
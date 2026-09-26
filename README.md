# 🎯 Number Guessing Game

A simple console-based number guessing game built in **C++**. The player has 5 attempts to guess a secret number, with feedback after every guess to help them close in on the answer.

## 🕹️ How It Works
- The program sets a secret number.
- The player enters a guess.
- The game responds with feedback:
  - Too high or too low
  - How close the guess is ("so close" vs "way off")
- The game ends when the player guesses correctly **or** runs out of attempts, and shows the final result.

## 🛠️ Built With
- C++
- Core concepts: `if/else`, `do-while` loops, comparison operators, `cin`/`cout`

## ▶️ How to Run
```bash
g++ Number-Guessing-Game.cpp -o Number-Guessing-Game
./Number-Guessing-Game
```

## 📋 Example
```
Enter your first guess: 45
Your guess is so close higher numbers
Enter your first guess: 50
**********Congratulations You won***********
your guess is correct
You used 2 attempts
```

## 🚀 About This Project
This was my first C++ project, built to practice fundamentals — conditionals, loops, and basic I/O — while solving a real (if small) problem from scratch.

# Number Guessing Game

A simple console-based number guessing game built in C++. The player tries to guess a secret number within 5 attempts.

## How It Works
- The program sets a secret number.
- The player guesses, and the game gives feedback: too high, too low, and how close the guess is.
- The game ends when the player guesses correctly or runs out of attempts.

## Concepts Practiced
if/else, do-while loops, comparison operators, cin/cout

## How to Run
```bash
g++ Number-Guessing-Game.cpp -o Number-Guessing-Game
./Number-Guessing-Game
```

Example output:
Enter your first guess: 45
Your guess is so close higher numbers
Enter your first guess: 50
You won! You won! You used 2 attempts

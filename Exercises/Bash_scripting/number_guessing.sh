//bash: a number guessing game with 3 attempts that tells you to guess higher or lower

#!/bin/bash

target_number=5

attempts=3

echo "Welcome to the Number Guessing Game! Guess a number between 1 and 10"

while [ $attempts -gt 0 ]; do
read -p "Enter your guess: " user_guess

if [ $user_guess -eq $target_number ]; then
echo "Congratulations! You guessed the correct number."
exit 0
elif [ $user_guess -lt $target_number ]; then
echo "Try higher. Attempts left: $((attempts--))"
else
echo "Try lower. Attempts left: $((attempts--))"
fi
done

echo "Sorry, The number was $target_number."
exit 0


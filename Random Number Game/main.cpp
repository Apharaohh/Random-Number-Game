/* Write a C++ program that generates a random number between 1 and 10, and then prompts the user to guess the number. The program should provide feedback on whether the guess is too high, too low, or correct.

Requirements:

The program should generate a random number between 1 and 100.
It should then prompt the user to guess the number.
For each guess:
If the guess is higher than the number, the program should display "Too high! Try again."
If the guess is lower than the number, the program should display "Too low! Try again."
If the guess is correct, the program should display "Congratulations! You guessed the number in [x] attempts!" where [x] is the number of attempts taken.
The program should keep track of the number of attempts.
After the user guesses the number correctly, the program should ask if they want to play again or exit. */


#include <iostream>
#include <cstdlib> // For srand() and rand()
#include <ctime>   // For time()

int main() {
    
    // Seed the random number generator
    std::srand(std::time(0));
    int randomNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;
    char playAgain;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    do {
        attempts = 0; // Reset the attempt counter for each game
        randomNumber = std::rand() % 100 + 1; // Generate a new random number

        std::cout << "I have selected a number between 1 and 100." << std::endl;

        do {
            std::cout << "Enter your guess: ";
            std::cin >> guess;
            attempts++;

            if (guess > randomNumber) {
                std::cout << "Too high! Try again." << std::endl;
            } else if (guess < randomNumber) {
                std::cout << "Too low! Try again." << std::endl;
            } else {
                std::cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << std::endl;
            }

        } while (guess != randomNumber);

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thank you for playing!" << std::endl;

    return 0;
}


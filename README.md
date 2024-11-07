# Age Guesser Program

## Overview

The **Age Guesser Program** is an interactive console application written in C++. It prompts the user to input a number, a birthday status, and their birth year. The program uses these inputs to guess the user's current age based on a predefined mathematical formula.

This program demonstrates basic control structures, user input validation, and mathematical operations. It's an interesting example of how simple arithmetic and user input can be used to "guess" information about the user.



<img width="501" alt="image" src="https://github.com/user-attachments/assets/5e3b5d5f-da38-4ae0-9b3b-d2f93f2af8b2">


## Features

- **Number Input**: The user is asked to input a number between 1-9.
- **Birthday Status**: The user is asked if their birthday has already passed in the current year.
- **Birth Year Input**: The user provides their birth year for age calculation.
- **Age Calculation**: Based on the inputs, the program uses a mathematical formula to estimate the user's current age.
- **User-Friendly Output**: The program outputs a fun message with the guessed age and checks if the guess is correct.

## How It Works

1. **Step 1**: The program prompts the user to enter a number between 1 and 9.
2. **Step 2**: It then asks if the user's birthday has already occurred in the current year.
3. **Step 3**: The user is asked to provide their birth year.
4. **Step 4**: The program applies the following operations:
    - Multiplies the number entered by the user by 2, adds 5, then multiplies the result by 50.
    - If the user has already had their birthday, 1774 is added to the result. Otherwise, 1773 is added.
    - The user's birth year is subtracted from the resulting total.
5. **Step 5**: The program extracts the first digit of the resulting number as the guessed number and the last two digits as the user's age.
6. **Step 6**: The program outputs the guessed number and the user's age.

## Output

```
Enter a number between 1-9: 4
Has your birthday already arrived? (y/no) y
Now enter your Birth year: 1990

This is the number that you have guessed earlier: 4
This is your Current Age: 34
Hope I have guessed it correctly 😍
```

## Requirements

- C++11 or later.
- A C++ compiler such as GCC or Clang.

## How to Run

1. Save the code to a file named `AgeGuesser.cpp`.
2. Compile the program using a C++ compiler:
   ```
   g++ AgeGuesser.cpp -o AgeGuesser
   ```
3. Run the compiled program:
   ```
   ./AgeGuesser
   ```

## Code Breakdown

### 1. Class Definition: `AgeGuesser`

The main functionality is implemented inside the `AgeGuesser` class. This class has the following private members:
- `int number`: Stores the number entered by the user.
- `string birthdayResponse`: Stores whether the user’s birthday has passed in the current year.
- `int birthYear`: Stores the user's birth year.
- `int total`: Stores the final calculated total used to extract the age.

### 2. Constructor: `AgeGuesser()`

The constructor initializes the member variables to their default values:
- `number = 0`
- `total = 0`
- `birthYear = 0`

### 3. Method: `getInput()`

This method handles user input:
- It asks for a number between 1 and 9 and validates the input.
- It prompts the user to confirm if their birthday has passed in the current year.
- It asks for the user's birth year and validates the input.

### 4. Method: `calculateAndDisplay()`

This method performs the age calculation and displays the results:
- It performs arithmetic operations to guess the user’s age.
- It extracts the first digit and the last two digits of the result to form the "guessed number" and the "current age".

### 5. Method: `run()`

The `run()` method combines all functionality. It calls `getInput()` to gather user data and then calculates and displays the result by calling `calculateAndDisplay()`.

### 6. Main Function

The `main()` function creates an object of `AgeGuesser` and runs the `run()` method.


## Troubleshooting

- **Input Validation**: The program includes checks for valid inputs. If the user enters an invalid number or birthday response, they will be prompted again for valid inputs.
- **Birth Year**: Ensure that the birth year entered is realistic and accurate.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

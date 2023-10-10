# Simple ATM Program In C

This is a simple ATM (Automated Teller Machine) program written in C. It allows users to perform basic banking operations, such as depositing money, withdrawing money, and checking their account balance. Below is a brief overview of the program and its functionalities.

## Program Overview

- The program is written in C and uses standard input and output functions.
- It simulates an ATM system where users can access their accounts with a password.
- Users can perform the following operations:
  1. Deposit money into their account.
  2. Withdraw money from their account.
  3. Check their current account balance.

## Getting Started

1. Compile the program using a C compiler. You can use a C compiler like GCC to compile the code. For example, you can compile it using the following command:

   ```
   gcc atm_program.c -o atm
   ```

2. Run the compiled program:

   ```
   ./atm
   ```

3. Follow the on-screen prompts to interact with the ATM program.

## Program Flow

- When you run the program, it will display a welcome message and ask you to enter your name.

- After entering your name, the program will prompt you to enter a password. The default password is set to "1234."

- Once you successfully enter the password, you can choose from the following options:
  1. Deposit: You can deposit money into your account.
  2. Transaction: You can withdraw money from your account.
  3. Check Your Current Balance: You can check your current account balance.

- After each operation, the program will ask if you want to perform another transaction. Enter 'Y' or 'y' to continue or any other key to exit.

## Notes

- The program is a simple simulation and is not suitable for real banking operations.

- Be cautious when entering the password. After five incorrect attempts, the program will lock you out, and you will need to reopen the application.

- The program does not store account information persistently; it keeps the account balance in memory during program execution.

Feel free to modify and enhance this program for learning and experimentation purposes.

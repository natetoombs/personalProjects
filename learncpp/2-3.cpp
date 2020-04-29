/* 2.3 Q5
Write a complete program that reads an integer from the user, doubles it using
 the doubleNumber() function you wrote in the previous quiz, and then prints the
 doubled value out to the console.
*/
#include <iostream>

// Asks for an integer and returns it
int readInt()
{
  std::cout << "Enter an integer: \n";
  int integer{};
  std::cin >> integer;
  return integer;
}

// Doubles the input number and returns the output
int doubleNumber(int number)
{
  return number * 2;
}

// Prints the value parameter
void printValue(int value)
{
  std::cout << "Your integer doubled is: " << value << '\n';
}

int main()
{
  printValue(doubleNumber(readInt()));
  return 0;
}

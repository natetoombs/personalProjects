/* 1.x Chapter 1 Quiz
  Write a code whose output matches the following:
  Enter an integer: 6
  Enter another integer: 4
  6 + 4 is 10.
  6 - 4 is 2.
*/

#include <iostream>

int main()
{
  std::cout << "Enter an integer: \n"; // Ask for the first integer
  int num1{}; // Initialize first integer as num1
  std::cin >> num1; // Assign value for num1 from input

  std::cout << "Enter another integer: \n"; // Ask for the second integer
  int num2{}; // Initialize second integer as num2
  std::cin >> num2; // Assign value for num2 from input

  // Print the sum of the numbers
  std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n';

  // Print the difference of the numbers
  std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n';

  return 0;
}

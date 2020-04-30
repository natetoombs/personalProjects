/* io.cpp
  Includes function definitions for reading and writing
*/
#include <iostream>

// A function that reads in a number from the user, and returns it.
int readNumber() {
  int input_int{};
  std::cout << "Enter an integer: \n";
  std::cin >> input_int;
  return input_int;
}

//A function that outputs a given value to the console.
int writeAnswer(int answer) {
  std::cout << "The answer is: " << answer;
}

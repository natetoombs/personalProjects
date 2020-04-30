/* 2.x Q1-3
    main.cpp: a function that reads two separate integers from the user, adds
    them together, and then outputs the answer.
*/
#include "../include/io.h"
#include "../include/add.h"

int main() {
  writeAnswer(addTwoNumbers(readNumber(), readNumber()));

  return 0;
}

/* 2.8
  Testing multiple files for a single program
*/

#include <iostream>

// Learncpp says NOT to use the below line.
// #include "add.cpp"

// Instead, if you select all of the program files then right-click to compile
// and run, it works.

// needed so main.cpp knows that add() is a function declared elsewhere
int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

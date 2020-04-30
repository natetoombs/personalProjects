/* 2.11
  Using a header file to avoid forward declaration of functions.
  Using header guard from 2.12.
*/

#include <iostream>

#include "add.h"

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

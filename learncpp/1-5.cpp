/* 1.5
  Using cin, cout, endl requires namespace
*/

#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n'; // You can also use std::endl,
    // but \n is preferred. \n can be used in a quoted string.
    return 0;
}

/* 1.4
  This shows different ways to assign and initialize variables
*/

#include <iostream>

int main()
{
	int width; // allocate (define) the variable
	width = 5; // copy assignment of value 5 into variable width

	// variable width now has value 5

	width = 7; // change value stored in variable width to 7

	// variable width now has value 7

	// initialization is when the variable is defined and given a
	// value at once
	int length = 4; // copy initialization
	int height( 3 ); // direct initialization (preferred)

	// braace initialization is used for some objects, like lists
	int boxes{ 2 }; // direct brace initialization (preferred)
	int cubes = { 2 }; // copy brace initialization
	int rectangularPrisms{}; // zero initialization to 0 (or empty)

	// Multiple variables can be initialized at once
	int a, b; // Define multiple variables
	int c = 1, d = 2; // copy initialization
	int e( 3 ), f( 4 ); // direct initialization
	int g{ 5 }, h{ 6 }; // brace initialization (preferred)

	std::cout << boxes << "\n" << f;

	return 0;
}

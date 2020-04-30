/* 2.9
  This program won't compile because there are two 'cout' functions in the same
  namespace (global). It is a reason never to use using directives
  (using namespace).
*/

#include <iostream> // imports the declaration of std::cout

using namespace std; // makes std::cout accessible as "cout"

int cout() // declares our own "cout" function
{
    return 5;
}

int main()
{
    cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?

    return 0;
}

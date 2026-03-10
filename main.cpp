#include <iostream>
#include "foo.h"

int main()
{
    std::cout << "Hello World!\n";
    foo();
    std::cout << "9 + 10 = 19\n";

    sum(5,6);
    return 0;
}
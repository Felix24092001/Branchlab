#include <iostream>
#include "foo.h"
#include "boo.h"

int main()
{
    std::cout << "Hello World!\n";
    foo();
    boo();
    std::cout << "9 + 10 = 19\n";

    sum(5,6);
    return 0;
}
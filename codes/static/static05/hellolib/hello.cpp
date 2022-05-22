#include "hello.h"
#include <iostream>

void hello::print( const std::string & info )
{
    std::cout << "hello::print()!" << " info = " << info << std::endl;
}
#include <iostream>
#include "adt_stack.h"

int main()
{
    Stack<char> s1(5);

    std::cout << s1.stack_is_empty() << std::endl;
    s1.push('K');
    std::cout << s1.get_top() << std::endl;
    std::cout << s1.pop() << std::endl;
    
    return 0;
}
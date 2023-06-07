#include <iostream>
#include "adt_queue.h"

int main()
{
    Queue<int> q1(3);
    q1.enqueue(5);
    q1.enqueue(10);
    q1.enqueue(20);
    std::cout << q1.is_full() << std::endl;
    std::cout << q1.is_empty() << std::endl;
    std::cout << q1.dequeue() << std::endl;
    std::cout << q1.dequeue() << std::endl;
    std::cout << q1.dequeue() << std::endl;
    std::cout << q1.is_full() << std::endl;
    std::cout << q1.is_empty() << std::endl;
    
    return 0;
}
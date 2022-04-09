#include "queue.h"
#include <iostream>

using namespace std;

int main()
{
    Queue manager;
    Implicit_queue manager1;
    manager << 10 << 7 << 6 << 8;
    manager >> 2;
    manager1 << 11 << 9 << 3;
    return 0;
}
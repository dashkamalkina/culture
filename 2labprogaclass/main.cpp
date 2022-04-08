#include <iostream>
//#include "header.h"
#include "Stack.h"

int main()
{
    Stack stack(10);
    for(int i = 0; i < 10; ++i){
        stack.push(i);
    }
    Stack x(stack);
    
    stack.print();
    return 0;
}

#include "Stack.h"

Stack:: ~Stack()//деструктор
{
    while(!isEmpty())
        pop();
}

Stack:: Stack(int capacity): capacity(capacity), deep(0), head(nullptr) {}

Stack:: Stack (const Stack& other) : capacity(0), deep(0) {
    head = nullptr;
    int i = other.getSize() - 1;
    while(i > -1) {
        this->push(other.getTop(i));
        i--;
    }
}


void Stack:: push(int data) {
    if (deep != capacity) {

        stack_node *temp = head;
        head = new stack_node(data, temp);
        temp = nullptr;
        ++deep;
    }
}

bool Stack::isEmpty() const// Проверка на пустоту стека
{
    return head == nullptr; // если верхнего элемента нет(равен пустоте)
}

void Stack:: pop() // pop - удаляет элемент
{
    if (!isEmpty()) // Если функия Empty - true то работаем (можем удалять эл.)
    {
        stack_node *temp = head;
        head = head->next;
        delete temp;
        temp = nullptr;
    }
}

int Stack:: getSize() const{
    return deep;
}

int Stack::getTop(int i) const{
    return head->data;
}

void Stack:: print() const{
    if (!isEmpty()){
        std:: cout << "This is your stack:\n";
        stack_node * temp = head;
        for (int size = deep; size > 0; --size){
            std:: cout << temp->data << std::endl;
            temp = temp->next;
        }
    }
    else{
        std::cout << "Stack is empty :c";
    }
}





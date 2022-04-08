//
// Created by DARIA on 25.03.2022.
//

#ifndef MAIN_CPP_STACK_H
#define MAIN_CPP_STACK_H
#include <iostream>
class Stack {  // Реализация стека через класс
private:
    struct stack_node // Структура элемента, которая хранит инфу(data) и адрес на след. элемент
    {
        int data;
        stack_node *next;

        stack_node(int data, stack_node* next = nullptr): data(data), next(next) {}

    } ;
    stack_node* head{};// адрес на верхний элемент
    const int capacity;
    int deep;
public:
    ~Stack();

    Stack (const Stack& other);

    Stack();

    explicit Stack(int capacity);

    void push(int);

    void pop();

    bool isEmpty() const;

    int getSize() const;

    int getTop() const;

    void print() const;


};




#endif //MAIN_CPP_STACK_H
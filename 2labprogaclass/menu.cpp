//
// Created by DARIA on 26.03.2022.
//
#include "header.h"
#include <iostream>

using namespace std;
void menu()
{
    bool quite = false;
    char command[100];
    int input_data;
    char input[8];
    while (!quite)
    {

        cout << "input command:";
        cin >> command;
        cout << "***" << endl;
        if(strcmp(command, "quit") == 0)
        {
            quite = true;
        }
        else if(strcmp(command, "info") == 0)
        {
            cout << "1 - push element:\n";
            cout << "2 - pop element:\n";
            cout << "3 - getTop elemen:\n";
            cout << "4 - empty element:\n";
            cout << "5 - count element:\n";
            cout << "6 - print element:\n";
            cout << "7 - max_size:\n";
            cout << "8 - size:\n";
            cout << "9 - elem:\n";
        }
        else if (strcmp(command, "1") == 0)//сравнение двух строк проверяет первый элемент 1 строки со второй строкой
        {
            cin >> input;
            input_data = atoi(input);//анализирует строку делая ее содержимое как целое число которое вовращается как значение инт
            this->push(input_data);
        }
        else if(strcmp(command, "2") == 0)
        {
            this->pop();
        }
        else if(strcmp(command, "8") == 0)
        {
            cout << "size is:";
            cout << this->size() << endl;
        }
        else if(strcmp(command, "6") == 0)
        {
            this->print();
        }
        else if (strcmp(command, "3") == 0)
        {
            cout << this->getTop() << endl;
        }
    }
}


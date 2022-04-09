//
// Created by DARIA on 08.04.2022.
//
#include "queue.h"
#include <iostream>
#include <queue>
using namespace std;

Queue& operator<<(Queue& data, int a) {
    if (data.values.size() < data.size) {
        data.values.push(a);
        cout << a << endl;
        cout << "push" << endl;
        return data;
    }

}
Queue& operator>>(Queue& data, int b) {
    if (!data.values.empty()) {
        cout << data.values.front() << endl;
        cout << "pop" << endl;
        data.values.pop();
        return data;
    }
    return data;
}
Implicit_queue& operator<<(Implicit_queue& data, int a) {
    if (data.values.size() < data.size) {
        data.values.push(a);
        cout << a << endl;
        cout << "push" << endl;
        return data;
    }
    else return data;
}
Implicit_queue& operator>>(Implicit_queue& data, int b) {
    if (!data.values.empty()) {
        cout << data.values.front() << endl;
        cout << "pop" << endl;
        data.values.pop();
        return data;
    }
    return data;
}

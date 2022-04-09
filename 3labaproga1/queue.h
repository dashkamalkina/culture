//
// Created by DARIA on 08.04.2022.
//

#ifndef INC_3LABAPROGA1_QUEUE_H
#define INC_3LABAPROGA1_QUEUE_H
#include <queue>
using namespace std;
class Queue {
private:
    queue <int> values;//?
public:
    int size = 100;
    friend Queue& operator<<(Queue& data, int a);
    friend Queue& operator>>(Queue& data, int b);
};
class Implicit_queue {
private:
    queue<int> values;
public:
    int size = 100;
    friend Implicit_queue& operator<<(Implicit_queue& data, int a);
    friend Implicit_queue& operator>>(Implicit_queue& data, int b);

};
#endif //INC_3LABAPROGA1_QUEUE_H

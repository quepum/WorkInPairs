//
// Created by Алина on 25.10.2024.
//

#ifndef WORKINPAIRS_QUEUE_H
#include <stdbool.h>
bool testScanf(int result);
typedef struct QueueElement {
    int value;
    struct QueueElement* next;

}QueueElement;
struct Queue {
    struct QueueElement* front;
    struct QueueElement* back;
};
void Scanf(int* add);
void deleteFront(struct Queue* block);
void addBack(struct Queue* block, int value);
void queue(struct Queue* block, int value);
#endif //WORKINPAIRS_QUEUE_H

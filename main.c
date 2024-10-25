#include <stdio.h>
#include "queue.h"
#include <stdlib.h>

typedef struct QueueElement {
    int value;
    struct QueueElement* next;
} QueueElement;

struct Queue {
    QueueElement* head;
    QueueElement* back;
};

Queue* createQueue(Queue* queue) {
    return (Queue*)calloc(1, sizeof(Queue));
}





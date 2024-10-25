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

void createQueue(Queue* queue) {
    queue->head = (Queue*)calloc(1, sizeof(Queue));
    queue->back = (Queue*)calloc(1, sizeof(Queue));
}




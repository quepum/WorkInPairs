#include "queue.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool testScanf(int result) {
    return result == 1;
}

void Scanf(int* add) {
    int result = scanf("%d", add);
    if (!testScanf(result)) {
        printf("\nInput wrong!");
        return -1;
    }
}
void deleteFront(struct Queue* block) {
    QueueElement* elementFront = block->front;
    block->front = block->front->next;
    free(elementFront);
}

void addBack(struct Queue* block, int value) {
    QueueElement* element = calloc(1, sizeof(QueueElement));
    element->value = value;
    block->back->next = element;
    block->back = element;
}

void queue(struct Queue* block, int value) {
    deleteFront(block);
    addBack(block, value);
}
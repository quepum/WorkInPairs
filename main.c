#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

int main() {
    struct Queue* block = calloc(1, sizeof(struct Queue));
    QueueElement* element = calloc(1, sizeof(QueueElement));
    int testFirst = 0;

    int add = 6;
    int number = 5;
    
    while (number != 0) {
        printf("\nSpecify the option number:\n0.Exit\n1.Just add the element to the end of the queue\n2.Add an element to the end of the queue and remove the first one");
        printf("\nNumber of option: ");
        Scanf(&number);
        if (number == 0) {
            break;
        } else if(testFirst == 0 && (number == 1 || number == 2)) {
            element->value = 1;
            block->back = element;
            block->front = element;
            block->front->next = block->back;
            printf("\nSpecify the number that will go into the queue: ");
            Scanf(&add);
            block->front->value = add;
            testFirst = 1;
            printf("Added to the end: %d\n", block->back->value);
        } else if (number == 1) {
            printf("\nSpecify the number that will go into the queue: ");
            Scanf(&add);
            addBack(block, add);
            printf("Added to the end: %d\n", block->back->value);
        }else if (number == 2) {
            printf("\nSpecify the number that will go into the queue: ");
            Scanf(&add);
            printf("Removed from the top: %d", block->front->value);
            queue(block, add);
            printf("\nAdded to the end: %d\n", block->back->value);
        } else {
            printf("\nInput wrong!");
            break;
        }
    }

    while (block->front != block->back) {
        deleteFront(block);
    }
    if (testFirst != 0) {
        deleteFront(block);
    }
    return 0;
}

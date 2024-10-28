#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void addEnd(Node** head, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next!= NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

Node* removeStart(Node** head) {
    if (*head == NULL) {
        return NULL;
    }
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    return *head;
}

void printAddedValues(Node* head) {
    Node* temp = head;
    while (temp!= NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
#pragma once

typedef struct Node Node;
// Функция для добавления элемента в конец списка
void addEnd(Node** head, int value);
// Функция для удаления элемента из начала списка
Node* removeStart(Node** head);
// Функция для вывода значений списка
void printAddedValues(Node* head);


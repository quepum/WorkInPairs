#ifndef H
typedef struct Element {
    int value;
    struct Element* next;
}Element;

typedef struct Block {
    struct Block* front;
    struct Block* back;
}Block;
void push(Element* head2, int value);
void pop(Element* head2);
void addElement(Element* front, Element* back, int value);
void deleteElement(Element* front, Element* element);
#endif
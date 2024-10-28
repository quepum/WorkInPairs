#include "list.h"
void push(Element* head2, int value) {
    Element* element = malloc(sizeof(Element));
    element->value = value;
    element->next = head2;
    head2 = element;
}

void pop(Element* head2) {
    Element* tmp = head2;
    head2 = head2->next;
    free(tmp);
}

void addElement(Element* front, Element* back, int value) {
    Element* element = malloc(sizeof(Element));
    element->value = value;
    element->next = back;
    front->next = element;
}

void deleteElement(Element* front, Element* element) {
    Element* delete = element;
    front->next = element->next;
    free(delete);
}

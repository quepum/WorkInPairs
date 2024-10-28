#include "list.h"

typedef struct Element {
    int value;
    struct QueueElement *next;
};
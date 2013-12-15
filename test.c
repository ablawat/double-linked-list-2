#include "value.h"
#include "linked-list-int.h"

int main()
{
    LinkedListInt **list = LinkedListIntCreate();
    Value *value;
    
    
    LinkedListIntPrint(list);
    putchar(10);
    
    value = malloc(sizeof(Value));
    value -> number = 1;
    LinkedListIntAddLast(list, value);
    LinkedListIntPrint(list);
    putchar(10);
    
    value = malloc(sizeof(Value));
    value -> number = 2;
    LinkedListIntAddLast(list, value);
    LinkedListIntPrint(list);
    putchar(10);
    
    LinkedListIntRemoveLast(list);
    LinkedListIntPrint(list);
    putchar(10);
    
    value = malloc(sizeof(Value));
    value -> number = 3;
    LinkedListIntAddFirst(list, value);
    LinkedListIntPrint(list);
    putchar(10);
    
    LinkedListIntClear(list);
    LinkedListIntPrint(list);
    putchar(10);
    
    value = malloc(sizeof(Value));
    value -> number = 2;
    LinkedListIntAddLast(list, value);
    LinkedListIntPrint(list);
    putchar(10);
    
    value = malloc(sizeof(Value));
    value -> number = 2;
    LinkedListIntAddLast(list, value);
    LinkedListIntPrint(list);
    putchar(10);
    
    LinkedListIntRemoveFirst(list);
    LinkedListIntPrint(list);
    putchar(10);
    
    LinkedListIntRemoveLast(list);
    LinkedListIntPrint(list);
    putchar(10);
    
    value = malloc(sizeof(Value));
    value -> number = 1;
    LinkedListIntAddLast(list, value);
    LinkedListIntPrint(list);
    putchar(10);
    
    value = malloc(sizeof(Value));
    value -> number = 2;
    LinkedListIntAddLast(list, value);
    LinkedListIntPrint(list);
    putchar(10);
    
    value = malloc(sizeof(Value));
    value -> number = 3;
    LinkedListIntAddLast(list, value);
    LinkedListIntPrint(list);
    putchar(10);
    
    LinkedListIntClear(list);
    LinkedListIntPrint(list);
    putchar(10);
    
    return 0;
}

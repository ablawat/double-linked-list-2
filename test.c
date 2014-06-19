#include <stdlib.h>
#include "data.h"
#include "linked-list-int.h"

int main()
{
    linked_list_data_t **list = linked_list_data_create();
    data_t *value;
    
    
    linked_list_data_print(list);
    putchar(10);
    
    value = malloc(sizeof(data_t));
    value -> value1 = 1;
    value -> value2 = 2;
    linked_list_data_add_last(list, value);
    linked_list_data_print(list);
    putchar(10);
    
    value = malloc(sizeof(data_t));
    value -> value1 = 3;
    value -> value2 = 4;
    linked_list_data_add_last(list, value);
    linked_list_data_print(list);
    putchar(10);
    
    linked_list_data_remove_last(list);
    linked_list_data_print(list);
    putchar(10);
    
    value = malloc(sizeof(data_t));
    value -> value1 = 5;
    value -> value2 = 6;
    linked_list_data_add_first(list, value);
    linked_list_data_print(list);
    putchar(10);
    
    linked_list_data_clear(list);
    linked_list_data_print(list);
    putchar(10);
    
    value = malloc(sizeof(data_t));
    value -> value1 = 2;
    value -> value2 = 3;
    linked_list_data_add_last(list, value);
    linked_list_data_print(list);
    putchar(10);
    
    value = malloc(sizeof(data_t));
    value -> value1 = 4;
    value -> value2 = 5;
    linked_list_data_add_last(list, value);
    linked_list_data_print(list);
    putchar(10);
    
    linked_list_data_remove_first(list);
    linked_list_data_print(list);
    putchar(10);
    
    linked_list_data_remove_last(list);
    linked_list_data_print(list);
    putchar(10);
    
    value = malloc(sizeof(data_t));
    value -> value1 = 7;
    value -> value2 = 8;
    linked_list_data_add_last(list, value);
    linked_list_data_print(list);
    putchar(10);
    
    value = malloc(sizeof(data_t));
    value -> value1 = 4;
    value -> value2 = 5;
    linked_list_data_add_last(list, value);
    linked_list_data_print(list);
    putchar(10);
    
    value = malloc(sizeof(data_t));
    value -> value1 = 8;
    value -> value2 = 9;
    linked_list_data_add_last(list, value);
    linked_list_data_print(list);
    putchar(10);
    
    linked_list_data_clear(list);
    linked_list_data_print(list);
    putchar(10);
    
    return 0;
}

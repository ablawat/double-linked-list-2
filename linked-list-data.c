#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "linked-list-int.h"

// Tworzy listę dowiązaniową
// -------------------------
linked_list_data_t ** linked_list_data_create()
{
    linked_list_data_t **list = malloc(sizeof(linked_list_data_t *) * 2);
    list[0] = NULL;
    list[1] = NULL;
    
    return list;
}

// Dodaje element na początek listy
// --------------------------------
int linked_list_data_add_first(linked_list_data_t **list, data_t *value)
{
    linked_list_data_t *new_value = malloc(sizeof(linked_list_data_t));
    int result;
    
    if (new_value != NULL)
    {
        new_value -> value = value;
        
        if (list[0] == NULL)
        {
            new_value -> next = NULL;
            new_value -> prev = NULL;
            
            list[0] = new_value;
            list[1] = new_value;
        }
        else
        {
            new_value -> next = list[0];
            new_value -> prev = NULL;
            
            list[0] -> prev = new_value;
            list[0] = new_value;
        }
        
        result = 0;
    }
    else
    {
        result = -1;
    }
    
    return result;
}

// Dodaje element na koniec listy
// ------------------------------
int linked_list_data_add_last(linked_list_data_t **list, data_t *value)
{
    linked_list_data_t *new_value = malloc(sizeof(linked_list_data_t));
    int result;
    
    if (new_value != NULL)
    {
        new_value -> value = value;
        
        if (list[0] == NULL)
        {
            new_value -> next = NULL;
            new_value -> prev = NULL;
            
            list[0] = new_value;
            list[1] = new_value;
        }
        else
        {
            new_value -> next = NULL;
            new_value -> prev = list[1];
            
            list[1] -> next = new_value;
            list[1] = new_value;
        }
        
        result = 0;
    }
    else
    {
        result = -1;
    }
    
    return result;
}

// Usuwa element z początku listy
// ------------------------------
void linked_list_data_remove_first(linked_list_data_t **list)
{
    linked_list_data_t *tmp_value;
    
    if (list[0] != NULL)
    {
        if (list[0] -> next == NULL)
        {
            free(list[0] -> value);
            free(list[0]);
            
            list[0] = NULL;
            list[1] = NULL;
        }
        else
        {
            tmp_value = list[0] -> next;
            tmp_value -> prev = NULL;
            
            free(list[0] -> value);
            free(list[0]);
            
            list[0] = tmp_value;
        }
    }
}

// Usuwa element z końca listy
// ---------------------------
void linked_list_data_remove_last(linked_list_data_t **list)
{
    linked_list_data_t *tmp_value;
    
    if (list[0] != NULL)
    {
        if (list[0] -> next == NULL)
        {
            free(list[1] -> value);
            free(list[1]);
            
            list[0] = NULL;
            list[1] = NULL;
        }
        else
        {
            tmp_value = list[1] -> prev;
            tmp_value -> next = NULL;
            
            free(list[1] -> value);
            free(list[1]);
            
            list[1] = tmp_value;
        }
    }
}

// Usuwa element z listy
// ---------------------
void linked_list_data_remove(linked_list_data_t **list, linked_list_data_t *to_remove)
{
    linked_list_data_t *tmp_value;
    
    if (list[0] == to_remove)
    {
        if (list[0] -> next == NULL)
        {
            free(list[0] -> value);
            free(list[0]);
            
            list[0] = NULL;
            list[1] = NULL;
        }
        else
        {
            tmp_value = list[0] -> next;
            tmp_value -> prev = NULL;
            
            free(list[0] -> value);
            free(list[0]);
            
            list[0] = tmp_value;
        }
    }
    else
    {
        if (list[1] == to_remove)
        {
            if (list[0] -> next == NULL)
            {
                free(list[1] -> value);
                free(list[1]);
                
                list[0] = NULL;
                list[1] = NULL;
            }
            else
            {
                tmp_value = list[1] -> prev;
                tmp_value -> next = NULL;
                
                free(list[1] -> value);
                free(list[1]);
                
                list[1] = tmp_value;
            }
        }
        else
        {
            to_remove -> prev -> next = to_remove -> next;
            to_remove -> next -> prev = to_remove -> prev;
            
            free(to_remove -> value);
            free(to_remove);
        }
    }
}

// Usuwa wszystkie elementy listy
// ------------------------------

void linked_list_data_clear(linked_list_data_t **list)
{
    linked_list_data_t *tmp_value = list[0];
    linked_list_data_t *to_remove;
    
    while (tmp_value != NULL)
    {
        to_remove = tmp_value;
        tmp_value = tmp_value -> next;
        
        free(to_remove -> value);
        free(to_remove);
    }
    
    list[0] = NULL;
    list[1] = NULL;
}

// Wyświetla zawartość listy
// -------------------------
void linked_list_data_print(linked_list_data_t **list)
{
    linked_list_data_t *tmp_value = list[0];
    
    printf("L");
    
    while (tmp_value != NULL)
    {
        printf("-|");
        printf("%d", tmp_value -> value -> value1);
        printf(",");
        printf("%d", tmp_value -> value -> value2);
        printf("|");
        
        tmp_value = tmp_value -> next;
    }
    
    putchar(32);
    
    tmp_value = list[1];
    
    while (tmp_value != NULL)
    {
        printf("|");
        printf("%d", tmp_value -> value -> value1);
        printf(",");
        printf("%d", tmp_value -> value -> value2);
        printf("|-");
        
        tmp_value = tmp_value -> prev;
    }
    
    printf("L");
}

#include "../my_list.h"
#include <stdio.h>
#include <stdlib.h>



linked_list_t *my_push_back_to_list(int key, char *value, linked_list_t *list)
{
    
    linked_list_t *new;
    linked_list_t *temp = list;
    new = malloc(sizeof(*new));
    
    new->value = value;
    new->key = key;
    new->next = NULL;

    if (temp == NULL)
        return new;

    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new;
    
    return list;
}

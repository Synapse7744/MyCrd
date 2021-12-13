/*
** ETNA PROJECT, 29/10/2021 by gachon_a
** find node
** File description:
**      find node
*/
#include "../my_list.h"
#include <stdio.h>
#include <stdlib.h>



linked_list_t *my_find_node(linked_list_t *list, int key)
{
    if (list == NULL) 
        return NULL;
    while (list != NULL)
    {
        if (list->key == key)
        {
            return list;
        }
        list=list->next;
    }
    return NULL;
}


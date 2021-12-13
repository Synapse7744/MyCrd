#include <stdlib.h>
#include "../my_list.h"


void my_delete_nodes(linked_list_t **list, const int key)
{
    if ((*list) == NULL) return;

    if ((*list)->key == key){
        (*list) = my_pop_front_from_list (*list);
        my_delete_nodes(&(*list), key);
    } else {
        my_delete_nodes(&(*list)->next, key);
    }
}
#include "../my_list.h"
#include <stdio.h>
#include <stdlib.h>

linked_list_t *my_pop_front_from_list(linked_list_t *list)
{
    linked_list_t *new = list->next;
    free(list);
    return new;
}




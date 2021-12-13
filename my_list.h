#include <stdlib.h>
typedef struct linked_list
{
    int key;
    char *value;
    struct linked_list *next;
} linked_list_t;


linked_list_t *my_find_node(linked_list_t *list, const int key);
linked_list_t *my_push_back_to_list(int key, char *value, linked_list_t *list);
void my_delete_nodes(linked_list_t **list, const int key);
linked_list_t *my_pop_front_from_list(linked_list_t *list);


char *my_readline(void);
int my_getnbr(const char *str);
void my_putchar(char c);
void my_putnbr(int nb);
void my_putstr(const char *str);
char *my_readline(void);
char **my_str_to_word_array(const char *str);

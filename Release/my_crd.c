#include <stdio.h>
#include <stdlib.h>
#include "../my_list.h"
int main()
{
    linked_list_t *list = NULL;
    linked_list_t *node = NULL;
    char *line = NULL;
    size_t n = 0;
    char **tab;    
    char *key;
    char *value;
    int keyNbr;
    
    while (getline(&line, &n, stdin) != -1) /* On parcours toutes les lignes du .lst */
    {
        tab = my_str_to_word_array(line); /* On récupère un tableau */
        key = tab[0];
        keyNbr = my_getnbr(key);
        value = tab[1];

        if (value == NULL)          /* Cas recherche */
        {
            node = my_find_node(list, keyNbr);
            if (node == NULL)       /* Si aucun noeud trouvé */
            {
                my_putstr("-1\n");  /* On imprime -1 */
            }
            else                    /* Si noeud trouvé */
            {
                my_putstr(node->value); /* On imprime la valeur */
            }
        }
        else if (value[0] == 'D')   /* Si valeur à D */
        {
            node = my_find_node(list, keyNbr);
            if (node == NULL)       /* Si aucun noeud */
            {
                my_putstr("-1\n");
            }
            else                    /* Si noeud trouvé */
            {
                my_putstr(node->value); /* On renvoie la valeur */
                my_delete_nodes(&list, keyNbr); /* On supprime le noeud */
            }
        }
        else
        {   
            node = my_find_node(list, keyNbr);
            if (node == NULL)       /* Si aucun noeud */
            {
               list = my_push_back_to_list(keyNbr, value, list);    /* On push dans la liste */
                my_putnbr(keyNbr);                                  /* On imprime la clé */
                my_putstr("\n");
            }
            else                    /* Si noeud trouvé */
            {
                node->value = value;    /* On mets à jour la valeur du noeud */
                my_putnbr(keyNbr);      /*On imprime la clé */
                my_putstr("\n");
            }
        }   
    }
    return 0;
}




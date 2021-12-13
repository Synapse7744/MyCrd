/*
** ETNA PROJECT, 21/10/2021 by berton_r
** my_putchar
** File description:
**      string
*/
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../my_list.h"


void my_putchar(char c) {
 write(1, &c, sizeof(c));
}
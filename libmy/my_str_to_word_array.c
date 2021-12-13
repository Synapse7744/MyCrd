#include <stdlib.h>

int word_count(const char *str)
{
    int i = 0;
    int count = 1;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    return count;
}

char **my_str_to_word_array(const char *str)
{
    int size = word_count(str);
    int i = 0;
    int j = 0;
    int g = 0;
    char **word = malloc(word_count(str) * sizeof(char *) + 1);
    word[i] = malloc(word_count(str) * sizeof(char *) + 1);
    while (i < size)
    {
        while (str[j] != ' ' && str[j] != '\0')
        {
            word[i][g] = str[j];
            j++;
            g++;
        }
        word[i][g] = '\0';
        i++;
        g = 0;
        word[i] = malloc(word_count(str) * sizeof(char) + 1);
        while (str[j] == ' ')
        {
            j++;
        }
    }
    word[i] = NULL;
    return (word);
}
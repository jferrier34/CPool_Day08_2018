/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** Task01
*/

int strlen(char const *str)
{
    int nbr = 0;

    while(str[nbr] != '\0') {
        nbr = nbr + 1;
    }
    return (nbr);
}

char *my_strdup(char const *src)
{
    char *src_cpy;
    int nbr = 0;
    int my_length = strlen(src);

    src_cpy = malloc(sizeof(char) * my_length);
    while(src[nbr] != '\0'){
    src_cpy[nbr] = src[nbr];
    nbr++;
    }
    src_cpy[nbr] = '\0';
    return (&src_cpy[0]);
}

/*
** EPITECH PROJECT, 2018
** concat_params.c
** File description:
** Task02
*/

#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    char *str;
    int i = 0;
    int j = 0;
    int k = 0;

    str = malloc(sizeof(char) * (argc));
    while (argc > i) {
        j = 0;
        while (argv[i][j] != '\0') {
            str[k] = argv[i][j];
            k = k + 1;
            j = j + 1;
        }
        if (argc > i + 1)
            str[k] = '\n';
            i = i + 1;
            k = k + 1;
        }
        str[k - 1] = '\0';
        return (str);
}

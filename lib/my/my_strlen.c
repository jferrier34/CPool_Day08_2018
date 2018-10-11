/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** 
*/

int my_strlen(char const *str)
{
    int nbr = 0;

    while(str[nbr] != '\0') {
        nbr = nbr + 1;
    }
    return (nbr);
}

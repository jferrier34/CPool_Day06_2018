/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** task01
*/

char *my_strcpy(char *dest, char const *src)
{
    int i  = 0;

    while (src[i] != '\0') {
     dest[i] = src[i];
     i++;
    }
    return (dest);
}

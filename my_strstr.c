/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** Task04 
*/

char *my_strstr(char *str, char const *to_find)
{
    int i;
    int j;

    for (int i = 0; str[i] != '\0'; i++) {
	for (int j = 0; str[j] != '\0'; j++) {
	    if (str[i] == str[j] && str[i + 1] && str[i + 1] == to_find[j + 1] != ' ') {
		str[i] = toFind[k];
	    }
	}
    }
    return (str);
}

/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** Task03 
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    
    while(str[j] != '\0') {
	j = j + 1;
        k = k - 1;
    }

    while (j > 1) {
	k = str[i];
	str[i] = str[j];
	str[j] = k;
	i = i + 1;
	j = j + 1;
    }
    return (str);
}
